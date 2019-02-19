//https://cboard.cprogramming.com/linux-programming/139389-simple-c-library-playing-wav-files.html
//https://gist.github.com/ghedo/963382
// sudo apt-get install libasound2 libasound2-dev
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <alsa/asoundlib.h>
#include <pthread.h>
#include <errno.h>
#include <sys/stat.h>

#include "../hdr/sound.h"
#include "../hdr/config.h"

int soundNo;

pthread_t soundThread;

#define PCM_DEVICE "default"

typedef struct soundItem
{
  char *data;
  long length;
} soundItem_t;

soundItem_t sounds[NUMBER_OF_SOUNDS];

char *loadWavFile(char *file, long *fileLength)
{
  size_t rv;
  struct stat info;
  char *data;
  FILE *pFile = fopen(file, "rb");

  if (pFile == NULL)
  {
    fprintf(stderr, "loadWavFile() -- Couldn't open %s: ", file);
    return NULL;
  }

  stat(file, &info);
  data = malloc(info.st_size);
  if ((rv = fread(data, 1, info.st_size, pFile)) != info.st_size)
  {
    fprintf(stderr, "loadWavFile -- Read short on %s: %d/%d\n", file, (int)rv, (int)info.st_size);
  }
  fclose(pFile);
  *fileLength = info.st_size;
  return data;
}

void initSounds()
{
  sounds[WRONG_SOUND].data = loadWavFile("./sounds/Yamaha-V50-Woosh.wav", &sounds[WRONG_SOUND].length);
  sounds[OK_SOUND].data = loadWavFile("./sounds/Finger-Snaps.wav", &sounds[OK_SOUND].length);
  sounds[ENTER_SOUND].data = loadWavFile("./sounds/Electro-Chord.wav", &sounds[ENTER_SOUND].length);
  sounds[BACK_SOUND].data = loadWavFile("./sounds/Roland-JD-990-Windchimes.wav", &sounds[BACK_SOUND].length);

  sounds[MUSIC_BASS_DRUM].data = loadWavFile("./sounds/music/Bass-Drum-1.wav", &sounds[MUSIC_BASS_DRUM].length);
  sounds[MUSIC_SNARE].data = loadWavFile("./sounds/music/Ensoniq-ESQ-1-Snare-2.wav", &sounds[MUSIC_SNARE].length);
  sounds[MUSIC_HI_HAT].data = loadWavFile("./sounds/music/Open-Hi-Hat-1.wav", &sounds[MUSIC_HI_HAT].length);
  sounds[MUSIC_HI_HAT_CLOSED].data = loadWavFile("./sounds/music/Closed-Hi-Hat-1.wav", &sounds[MUSIC_HI_HAT_CLOSED].length);
}

void *initAlsa(void *pSoundNumber)
{
  unsigned int pcm, tmp, dir;
  int rate, channels;
  snd_pcm_t *pcm_handle;
  snd_pcm_hw_params_t *params;
  snd_pcm_uframes_t frames;

  rate = 44100;
  channels = 2;

  /* Open the PCM device in playback mode */
  if (pcm = snd_pcm_open(&pcm_handle, PCM_DEVICE,
                         SND_PCM_STREAM_PLAYBACK, 0) < 0)
    printf("ERROR: Can't open \"%s\" PCM device. %s\n",
           PCM_DEVICE, snd_strerror(pcm));

  /* Allocate parameters object and fill it with default values*/
  snd_pcm_hw_params_alloca(&params);

  snd_pcm_hw_params_any(pcm_handle, params);

  /* Set parameters */
  if (pcm = snd_pcm_hw_params_set_access(pcm_handle, params,
                                         SND_PCM_ACCESS_RW_INTERLEAVED) < 0)
    printf("ERROR: Can't set interleaved mode. %s\n", snd_strerror(pcm));

  if (pcm = snd_pcm_hw_params_set_format(pcm_handle, params,
                                         SND_PCM_FORMAT_S16_LE) < 0)
    printf("ERROR: Can't set format. %s\n", snd_strerror(pcm));

  if (pcm = snd_pcm_hw_params_set_channels(pcm_handle, params, channels) < 0)
    printf("ERROR: Can't set channels number. %s\n", snd_strerror(pcm));

  if (pcm = snd_pcm_hw_params_set_rate_near(pcm_handle, params, &rate, 0) < 0)
    printf("ERROR: Can't set rate. %s\n", snd_strerror(pcm));

  /* Write parameters */
  if (pcm = snd_pcm_hw_params(pcm_handle, params) < 0)
    printf("ERROR: Can't set harware parameters. %s\n", snd_strerror(pcm));

  /* Resume information */
  //printf("PCM name: '%s'\n", snd_pcm_name(pcm_handle));

  //printf("PCM state: %s\n", snd_pcm_state_name(snd_pcm_state(pcm_handle)));

  snd_pcm_hw_params_get_channels(params, &tmp);
  //printf("channels: %i ", tmp);

  /*if (tmp == 1)
        printf("(mono)\n");
    else if (tmp == 2)
        printf("(stereo)\n");*/

  snd_pcm_hw_params_get_rate(params, &tmp, 0);
  //printf("rate: %d bps\n", tmp);

  //printf("seconds: %d\n", seconds);

  // Allocate buffer to hold single period
  snd_pcm_hw_params_get_period_size(params, &frames, 0);

  //printf("frames: %ld\n", frames);

  /*
  snd_pcm_hw_params_get_period_time(params, &tmp, NULL);*/

  int rc;
  int size = frames * 4;
  int *pNumber = (int *)pSoundNumber;
  ///int rem;
  char *dp = sounds[*pNumber].data + 44; // wave headeer is first 44 bytes
  for (int i = 0; i < sounds[*pNumber].length - 44; i += size)
  {
    //printf("playing %d\n", i);
    // rem = (soundsLen[3] - i) / 2;
    //if (rem > 128) rem = 128;
    rc = snd_pcm_writei(pcm_handle, dp, frames);
    if (rc == -EPIPE)
    {
      /* EPIPE means underrun */
      printf("underrun occurred\n");
      snd_pcm_prepare(pcm_handle);
    }
    else if (rc < 0)
    {
      // TODO handle this
      printf("error from writei: %d\n", rc);
    }
    else if (rc != (int)frames)
    {
      // TODO handle this
      printf("short write, write %d frames\n", rc);
    }

    dp += size;
  }

  //  printf("done playing\n");
  snd_pcm_drain(pcm_handle);
  //  printf("drained\n");

  snd_pcm_close(pcm_handle);
  //  printf("closed\n");

  return 0;
}

int playFile(char *p)
{
  /* old
  int status;
  pid_t pid;

  pid = fork();
  if (pid == 0)
  {
    printf("1.\n");
    // This is the child process.  Execute the shell command. 
    execl("/usr/bin/omxplayer", " ", p, NULL);
    printf("2.\n");
    _exit(EXIT_FAILURE);
  }
  else if (pid < 0)
    // The fork failed.  Report failure.  
    status = -1;
  else
      // This is the parent process.  Wait for the child to complete.  
      if (waitpid(pid, &status, 0) != pid)
    status = -1;
  return status;*/
}

void playSoundWrong()
{
  soundNo = WRONG_SOUND;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void playSoundOk()
{
  soundNo = OK_SOUND;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void playSoundEnter()
{
  soundNo = ENTER_SOUND;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void playSoundBack()
{
  // https://timmurphy.org/2010/05/04/pthreads-in-c-a-minimal-working-example/
  soundNo = BACK_SOUND;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

typedef enum
{
  AUDIO_VOLUME_SET,
  AUDIO_VOLUME_GET,
} audio_volume_action;

void setVolume()
{
  printf("volumn set to %d\n", config.volumn);
  long min, max;
  snd_mixer_t *handle;
  snd_mixer_selem_id_t *pSelemId;
  const char *pCard = "default";
  const char *pSelemName = "Master";

  snd_mixer_open(&handle, 0);
  snd_mixer_attach(handle, pCard);
  snd_mixer_selem_register(handle, NULL, NULL);
  snd_mixer_load(handle);

  snd_mixer_selem_id_alloca(&pSelemId);
  snd_mixer_selem_id_set_index(pSelemId, 0);
  snd_mixer_selem_id_set_name(pSelemId, pSelemName);
  printf("handle %p pSelemId %p\n", handle, pSelemId);

  snd_mixer_elem_t *pElement = snd_mixer_find_selem(handle, pSelemId);
  printf("pElement %p\n", pElement);
  if (pElement == NULL)
  {
    // fails on pi maybe because as root?
    snd_mixer_close(handle);
  }

  //snd_mixer_handle_events(handle);
  snd_mixer_selem_get_playback_volume_range(pElement, &min, &max);
  snd_mixer_selem_set_playback_volume_all(pElement, config.volumn * max / MAX_VOLUMN);

  snd_mixer_close(handle);
}

void volumnUp()
{
  if (config.volumn < MAX_VOLUMN)
  {
    config.volumn++;
  }

  setVolume();
  saveConfig();
}

void volumnDown()
{
  if (config.volumn > 1)
  {
    config.volumn--;
  }

  setVolume();
  saveConfig();
}

void musicBassDrum()
{
  soundNo = MUSIC_BASS_DRUM;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void musicSnare()
{
  soundNo = MUSIC_SNARE;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void musicHiHat()
{
  soundNo = MUSIC_HI_HAT;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

void musicHiHatClosed()
{
  soundNo = MUSIC_HI_HAT_CLOSED;
  if (pthread_create(&soundThread, NULL, initAlsa, &soundNo))
  {
    fprintf(stderr, "Error creating thread\n");
  }
}

// funky drummer
// sex machine
// funky president

void musicBeat(int beat)
{
  //since the wav file are not tigth, this cannot be used
  return;

  // sex machine john 'jabo' starks
  // http://tartelet.dk/musikanalyse/soul/GetUpSexMachineGrooves.pdf
  switch (beat % 16)
  {
  case 0:
    musicBassDrum();
    musicHiHatClosed();
    break;
  case 1:
    break;
  case 2:
    break;
    musicHiHat();
  case 3:
    break;
  case 4:
    musicSnare();
    musicHiHatClosed();
    break;
  case 5:
    break;
  case 6:
    musicHiHatClosed();
  case 7:
    musicHiHatClosed();
  case 8:
    musicHiHatClosed();
    break;
  case 9:
    break;
  case 10:
    musicBassDrum();
    musicHiHat();
  case 11:
    break;
  case 12:
    musicSnare();
    musicHiHat();
    break;
  case 13:
    break;
  case 14:
    musicHiHat();
    break;
  case 15:
    break;
  default:
    break;
  }
}