#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <math.h>

#define CONFIG_BUFFER_SIZE 120

unsigned char pixel[640 * 360 * 4 + 1];
long pixelNumber;
char pName[120];
char pNameLong[100000];

void processLine(char *pLine)
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
    pixel[pixelNumber] = ((((byte[count + 2] - 33) & 0x3) << 6) | ((byte[count + 3] - 33)));
    pixel[pixelNumber + 1] = ((((byte[count + 1] - 33) & 0xF) << 4) | ((byte[count + 2] - 33) >> 2));
    pixel[pixelNumber + 2] = (((byte[count] - 33) << 2) | ((byte[count + 1] - 33) >> 4));
    pixel[pixelNumber + 3] = 0;

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

void processFile(char *pFileName, char *pImageName)
{
  char *data;
  char readBuffer[CONFIG_BUFFER_SIZE];
  pixelNumber = 0;

  printf("%s ", pFileName);
  fflush(stdout);

  char inputFilePath[200];
  sprintf(inputFilePath, "./SoulTrain/%s", pFileName);
  FILE *pInputFile = fopen(inputFilePath, "r");
  if (pInputFile == NULL)
  {
    printf("- File not found!\n");
    return;
  }

  int inLine = 0;

  while (fgets(readBuffer, CONFIG_BUFFER_SIZE, pInputFile) != NULL)
  {
    if (memcmp(readBuffer, "    \"\";", 7) == 0)
    {
      inLine = 0;
    }

    if (inLine == 1)
    {
      char *startPos = strstr(readBuffer, "\"");
      processLine(startPos + 1);
    }

    if (memcmp(readBuffer, "static char *header_data =", 26) == 0)
    {
      inLine = 1;
    }
  }

  fclose(pInputFile);

  printf("converted ");
  fflush(stdout);

  /* just corped
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
  fclose(pOutputFile);*/

  /* split to tiles
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
  fclose(pOutputFile);*/

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
          redAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4] * pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4];
          greenAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1] * pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1];
          blueAverage += pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2] * pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2];
        }
      }

      for (int k = 0; k < 4; k++)
      {
        for (int l = 0; l < 4; l++)
        {
          // round corners
          if ((k == 0 || k == 3) && (l == 0 || l == 3))
          {
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4] = 0;
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1] = 0;
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2] = 0;
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 3] = 0;
          }
          else
          {
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4] = sqrt(redAverage / 16);
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 1] = sqrt(greenAverage / 16);
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 2] = sqrt(blueAverage / 16);
            pixel[((j * 4 + l) * 640 + (i * 4 + k)) * 4 + 3] = 0;
          }
        }
      }
    }
  }

  printf("averaged ");
  fflush(stdout);

  /* corped, split to tiles and average color
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
  fclose(pOutputFile);*/
  sprintf(inputFilePath, "./SoulTrain/image%s.c", pImageName);

  FILE *pOutputSrcFile = fopen(inputFilePath, "w");

  fprintf(pOutputSrcFile, "unsigned char image%s[800 * 450 * 4 + 1];\n", pImageName);
  fprintf(pOutputSrcFile, "int image%screated = 0;\n\n", pImageName);

  fprintf(pOutputSrcFile, "void createImage%s()\n", pImageName);
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  int i = 0;\n");

  pixelNumber = 0;
  for (int j = 0; j < 360; j++)
  {
    for (int i = 0; i < 640; i++)
    {
      fprintf(pOutputSrcFile, "  image%s[%ld] = 0x%02x;\n", pImageName, pixelNumber, pixel[((j * 640) + i) * 4]);
      fprintf(pOutputSrcFile, "  image%s[%ld] = 0x%02x;\n", pImageName, pixelNumber + 1, pixel[((j * 640) + i) * 4 + 1]);
      fprintf(pOutputSrcFile, "  image%s[%ld] = 0x%02x;\n", pImageName, pixelNumber + 2, pixel[((j * 640) + i) * 4 + 2]);
      fprintf(pOutputSrcFile, "  image%s[%ld] = 0x%02x;\n", pImageName, pixelNumber + 3, pixel[((j * 640) + i) * 4 + 3]);
      pixelNumber += 4;
      if (i % 4 == 3)
      {
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 1);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 2);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 3);
        pixelNumber += 4;
      }
    }

    if (j % 4 == 3)
    {
      for (int i = 0; i < 800; i++)
      {
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 1);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 2);
        fprintf(pOutputSrcFile, "  image%s[%ld] = 0x00;\n", pImageName, pixelNumber + 3);
        pixelNumber += 4;
      }
    }
  }

  fprintf(pOutputSrcFile, "}\n\n");
  fprintf(pOutputSrcFile, "char *getImage%s()\n", pImageName);
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  if (!image%screated)\n", pImageName);
  fprintf(pOutputSrcFile, "  {\n");
  fprintf(pOutputSrcFile, "    createImage%s();\n", pImageName);
  fprintf(pOutputSrcFile, "  }\n");
  fprintf(pOutputSrcFile, "  return image%s;\n", pImageName);
  fprintf(pOutputSrcFile, "}\n");

  fclose(pOutputSrcFile);

  printf("written\n");
  fflush(stdout);
};

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    char *pLastDot = strrstr(argv[1], ".");
    char *pLastDash = strrstr(argv[1], "-");
    strcpy(pName, pLastDash + 1);

    pName[pLastDot - pLastDash - 1] = 0;

    processFile(argv[1], pName);
    return 0;
  };

  FILE *pMakeFile = fopen("./Makefile", "w");
  FILE *pHeaderFile = fopen("./image.h", "w");
  strcpy(pNameLong, "all:");

  fprintf(pMakeFile, "converter:\n");
  fprintf(pMakeFile, "\tgcc -o converter ./src/converter.c -lm\n\n");

  fprintf(pHeaderFile, "#ifndef _IMAGE_H_\n");
  fprintf(pHeaderFile, "#define _IMAGE_H_\n");

  DIR *directory;
  struct dirent *directoryFile;
  directory = opendir("./SoulTrain/");
  if (directory)
  {
    while ((directoryFile = readdir(directory)) != NULL)
    {
      char *pLastDot = strrstr(directoryFile->d_name, ".");
      if (pLastDot != NULL && strcmp(pLastDot, ".h") == 0)
      {
        char *pLastDash = strrstr(directoryFile->d_name, "-");
        strcpy(pName, pLastDash + 1);

        pName[pLastDot - pLastDash - 1] = 0;

        strcpy(pNameLong + strlen(pNameLong), " image");
        strcpy(pNameLong + strlen(pNameLong), pName);
        fprintf(pMakeFile, "image%s:\n", pName);
        fprintf(pMakeFile, "\tgcc -c ./SoulTrain/image%s.c\n\n", pName);
        fprintf(pHeaderFile, "char *getImage%s();\n", pName);

        processFile(directoryFile->d_name, pName);
      }
    }
    closedir(directory);
  }

  fprintf(pMakeFile, "%s\n\n", pNameLong);

  fprintf(pMakeFile, "clean:\n");
  fprintf(pMakeFile, "\trm -f converter *.o\n\n");

  fprintf(pHeaderFile, "#endif\n\n");

  fclose(pMakeFile);
  fclose(pHeaderFile);
}
