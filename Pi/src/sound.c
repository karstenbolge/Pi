#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "../hdr/sound.h"

uint8_t volumne = 8;

int playFile(char *p)
{
  int status;
  pid_t pid;

  pid = fork();
  if (pid == 0)
  {
    printf("1.\n");
    /* This is the child process.  Execute the shell command. */
    execl("/usr/bin/omxplayer", " ", p, NULL);
    printf("2.\n");
    _exit(EXIT_FAILURE);
  }
  else if (pid < 0)
    /* The fork failed.  Report failure.  */
    status = -1;
  else
      /* This is the parent process.  Wait for the child to complete.  */
      if (waitpid(pid, &status, 0) != pid)
    status = -1;
  return status;
}

void playSoundWrong()
{
  playFile(WRONG_SOUND);
}

void playSoundOk()
{
  playFile(OK_SOUND);
}

void playSoundEnter()
{
  playFile(ENTER_SOUND);
}

void playSoundBack()
{
  playFile(BACK_SOUND);
}

void volumnUp()
{
  if (volumne < 20)
  {
    volumne++;
  }
}

void volumnDown()
{
  if (volumne > 2)
  {
    volumne--;
  }
}
