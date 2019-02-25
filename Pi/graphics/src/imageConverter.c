#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

#define CONFIG_BUFFER_SIZE 120
#define DEBUG 0

unsigned char image00150[640 * 360 * 4 + 1];
int image00150created = 0;

void createImage00150()
{
  int i = 0;
  image00150[i++] = 0x22;
}

char *getImage00150()
{
  if (!image00150created)
  {
    createImage00150();
  }

  return image00150;
}

unsigned char pixel[640 * 360 * 4 + 1];
long pixelNumber;

void processLine(char *pLine, FILE *pOutputFile)
{
  char byte[64];
  int count = 0;

  while (count < 64)
  {
    if (*(pLine) == '\\')
    {
      pLine++;
    }
    byte[count] = *pLine;
    count++;
    pLine++;
  }

  count = 0;
  while (count < 64)
  {
    if (DEBUG)
    {
      printf("c %d %c %d\n", count, byte[count], byte[count]);
      printf("c %d %c %d\n", count + 1, byte[count + 1], byte[count + 1]);
      printf("c %d %c %d\n", count + 2, byte[count + 2], byte[count + 2]);
      printf("c %d %c %d\n", count + 3, byte[count + 3], byte[count + 3]);
    }

    pixel[pixelNumber] = ((((byte[count + 2] - 33) & 0x3) << 6) | ((byte[count + 3] - 33)));
    pixel[pixelNumber + 1] = ((((byte[count + 1] - 33) & 0xF) << 4) | ((byte[count + 2] - 33) >> 2));
    pixel[pixelNumber + 2] = (((byte[count] - 33) << 2) | ((byte[count + 1] - 33) >> 4));
    pixel[pixelNumber + 3] = 0;

    fprintf(pOutputFile, "    0x%02x, \n", pixel[pixelNumber]);
    fprintf(pOutputFile, "    0x%02x, \n", pixel[pixelNumber + 1]);
    fprintf(pOutputFile, "    0x%02x, \n", pixel[pixelNumber + 2]);
    fprintf(pOutputFile, "    0x%02x, \n", pixel[pixelNumber + 3]);

    pixelNumber += 4;
    count += 4;
  }
}

static char *strrstr(const char *haystack, const char *needle)
{
  if (*needle == '\0')
    return (char *)haystack;

  char *result = NULL;
  for (;;)
  {
    char *p = strstr(haystack, needle);
    if (p == NULL)
      break;
    result = p;
    haystack = p + 1;
  }

  return result;
}

void processFile(char *pFileName)
{
  char *data;
  char readBuffer[CONFIG_BUFFER_SIZE];
  pixelNumber = 0;

  printf("%s ", pFileName);

  FILE *pOutputFile = fopen("./SoulTrain/00150.h", "w");

  char inputFilePath[200];
  sprintf(inputFilePath, "./SoulTrain/%s", pFileName);
  FILE *pInputFile = fopen(inputFilePath, "r");
  if (pInputFile == NULL)
  {
    printf("- File not found!\n");
    return;
  }

  inputFilePath[strlen(inputFilePath) - 1] = 'c';
  int inLine = 0;

  while (fgets(readBuffer, CONFIG_BUFFER_SIZE, pInputFile) != NULL)
  {
    if (memcmp(readBuffer, "    \"\";", 7) == 0)
    {
      inLine = 0;
    }

    if (inLine == 1)
    {
      processLine(readBuffer + 5, pOutputFile);
      if (DEBUG)
      {
        printf("line1 %s\n", readBuffer);
      }
    }

    if (memcmp(readBuffer, "static char *header_data =", 26) == 0)
    {
      inLine = 1;
    }
  }

  fprintf(pOutputFile, "  };\n");

  fclose(pInputFile);
  fclose(pOutputFile);

  // just corped
  pOutputFile = fopen("./SoulTrain/00150-v2.h", "w");
  fprintf(pOutputFile, "unsigned char image00150[600 * 360 * 4 + 1] = {\n");
  for (int j = 0; j < 360; j++)
  {
    for (int i = 20; i < 620; i++)
    {
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 1]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 2]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 3]);
    }
  }
  fprintf(pOutputFile, "};\n");
  fclose(pOutputFile);

  // split to tiles
  pOutputFile = fopen("./SoulTrain/00150-v3.h", "w");
  fprintf(pOutputFile, "unsigned char image00150[800 * 450 * 4 + 1] = {\n");
  for (int j = 0; j < 360; j++)
  {
    for (int i = 0; i < 640; i++)
    {
      if (i % 4 == 3)
      {
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
      }
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 1]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 2]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 3]);
    }

    if (j % 4 == 3)
    {
      for (int i = 0; i < 800; i++)
      {
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
      }
    }
  }

  fprintf(pOutputFile, "};\n");
  fclose(pOutputFile);

  // pixel average colors 160 x 90
  for (int i = 0; i < 160; i++)
  {
    for (int j = 0; j < 90; j++)
    {
      long redAverage = 0;
      long greenAverage = 0;
      long blueAverage = 0;
      for (int k = 0; k < 4; k++)
      {
        for (int l = 0; l < 4; l++)
        {
          printf("red %d\n", pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4]);
          redAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4];
          greenAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1];
          blueAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2];
        }
      }

      for (int k = 0; k < 4; k++)
      {
        for (int l = 0; l < 4; l++)
        {
          printf("red %ld average  %ld\n", redAverage, redAverage / 16);
          pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4] = redAverage / 16;
          pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1] = greenAverage / 16;
          pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2] = blueAverage / 16;
          pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 3] = 0;
        }
      }
    }
  }

  // corped, split to tiles and average color
  pOutputFile = fopen("./SoulTrain/00150-v4.h", "w");
  fprintf(pOutputFile, "unsigned char image00150[800 * 450 * 4 + 1] = {\n");
  for (int j = 0; j < 360; j++)
  {
    for (int i = 0; i < 640; i++)
    {
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 1]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 2]);
      fprintf(pOutputFile, "    0x%02x, \n", pixel[((j * 640) + i) * 4 + 3]);
      if (i % 4 == 3)
      {
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
      }
    }

    if (j % 4 == 3)
    {
      for (int i = 0; i < 800; i++)
      {
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
        fprintf(pOutputFile, "    0x%02x, \n", 0);
      }
    }
  }

  fprintf(pOutputFile, "};\n");
  fclose(pOutputFile);

  inputFilePath[strlen(inputFilePath) - 1] = 'c';
  FILE *pOutputSrcFile = fopen(inputFilePath, "w");
  inLine = 0;

  fprintf(pOutputFile, "unsigned char image00150[640 * 360 * 4 + 1] = {\n");

  fprintf(pOutputSrcFile, "unsigned char image00150[640 * 360 * 4 + 1];\n");
  fprintf(pOutputSrcFile, "int image00150created = 0;\n\n");

  fprintf(pOutputSrcFile, "void createImage00150()\n");
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  int i = 0;\n");

  fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber, pixel[pixelNumber]);
  fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 1, pixel[pixelNumber + 1]);
  fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 2, pixel[pixelNumber + 2]);
  fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 3, pixel[pixelNumber + 3]);

  fprintf(pOutputSrcFile, "  }\n\n");
  fprintf(pOutputSrcFile, "char *getImage00150()\n");
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  if (!image00150created)\n");
  fprintf(pOutputSrcFile, "  {\n");
  fprintf(pOutputSrcFile, "    createImage00150();\n");
  fprintf(pOutputSrcFile, "  }\n");
  fprintf(pOutputSrcFile, "  return image00150;\n");
  fprintf(pOutputSrcFile, "}\n");

  fclose(pOutputSrcFile);
};

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    processFile(argv[1]);
    return 0;
  };

  DIR *directory;
  struct dirent *directoryFile;
  directory = opendir("./SoulTrain/");
  if (directory)
  {
    while ((directoryFile = readdir(directory)) != NULL)
    {
      char *pLastSlash = strrstr(directoryFile->d_name, ".");
      if (pLastSlash != NULL && strcmp(pLastSlash, ".h") == 0)
      {
        processFile(directoryFile->d_name);
      }
    }
    closedir(directory);
  }
}
