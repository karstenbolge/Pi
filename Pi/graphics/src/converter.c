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

  printf(".");
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

  sprintf(inputFilePath, "./SoulTrain/image%s.o", pImageName);
  FILE *pOutputBinFile = fopen(inputFilePath, "w");

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
      char redChar = sqrt(redAverage / 16);
      char greenChar = sqrt(redAverage / 16);
      char blueChar = sqrt(redAverage / 16);

      fwrite(&redChar, 1, 1, pOutputBinFile);
      fwrite(&greenChar, 1, 1, pOutputBinFile);
      fwrite(&blueChar, 1, 1, pOutputBinFile);
    }

    if (i % 40 == 0)
    {
      printf(".");
      fflush(stdout);
    }
  }

  fclose(pOutputBinFile);

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

  fprintf(pOutputSrcFile, "#include <stdio.h>\n");
  fprintf(pOutputSrcFile, "#include <string.h>\n\n");
  fprintf(pOutputSrcFile, "unsigned char image%s[800 * 450 * 4 + 1];\n", pImageName);
  fprintf(pOutputSrcFile, "int image%screated = 0;\n\n", pImageName);

  fprintf(pOutputSrcFile, "void createImage%s()\n", pImageName);
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  memset(&image%s, 0, 1440000);\n", pImageName);

  fprintf(pOutputSrcFile, "  FILE *pOutputBinFile = fopen(\"./graphics/SoulTrain/image%s.o\", \"rb\");\n", pImageName);
  fprintf(pOutputSrcFile, "  for (int i = 0; i < 160; i++)\n");
  fprintf(pOutputSrcFile, "  {\n");
  fprintf(pOutputSrcFile, "    for (int j = 0; j < 90; j++)\n");
  fprintf(pOutputSrcFile, "    {\n");
  fprintf(pOutputSrcFile, "      char redChar;\n");
  fprintf(pOutputSrcFile, "      char greenChar;\n");
  fprintf(pOutputSrcFile, "      char blueChar;\n");
  fprintf(pOutputSrcFile, "      fread(&redChar, 1, 1, pOutputBinFile);\n");
  fprintf(pOutputSrcFile, "      fread(&greenChar, 1, 1, pOutputBinFile);\n");
  fprintf(pOutputSrcFile, "      fread(&blueChar, 1, 1, pOutputBinFile);\n\n");
  fprintf(pOutputSrcFile, "      for (int k = 0; k < 4; k++)\n");
  fprintf(pOutputSrcFile, "      {\n");
  fprintf(pOutputSrcFile, "        for (int l = 0; l < 4; l++)\n");
  fprintf(pOutputSrcFile, "        {\n");
  fprintf(pOutputSrcFile, "          // round corners\n");
  fprintf(pOutputSrcFile, "          if ((k == 0 || k == 3) && (l == 0 || l == 3));\n");
  fprintf(pOutputSrcFile, "          else\n");
  fprintf(pOutputSrcFile, "          {\n");
  fprintf(pOutputSrcFile, "            image%s[((j * 5 + l) * 800 + (i * 5 + k)) * 4] = redChar;\n", pImageName);
  fprintf(pOutputSrcFile, "            image%s[((j * 5 + l) * 800 + (i * 5 + k)) * 4 + 1] = greenChar;\n", pImageName);
  fprintf(pOutputSrcFile, "            image%s[((j * 5 + l) * 800 + (i * 5 + k)) * 4 + 2] = blueChar;\n", pImageName);
  fprintf(pOutputSrcFile, "          }\n");
  fprintf(pOutputSrcFile, "        }\n");
  fprintf(pOutputSrcFile, "      }\n");
  fprintf(pOutputSrcFile, "    }\n");
  fprintf(pOutputSrcFile, "  }\n\n");
  fprintf(pOutputSrcFile, "  fclose(pOutputBinFile);\n");
  fprintf(pOutputSrcFile, "}\n\n");
  fprintf(pOutputSrcFile, "char *getImage%s()\n", pImageName);
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  if (!image%screated)\n", pImageName);
  fprintf(pOutputSrcFile, "  {\n");
  fprintf(pOutputSrcFile, "    createImage%s();\n", pImageName);
  fprintf(pOutputSrcFile, "    image%screated = 1;\n", pImageName);
  fprintf(pOutputSrcFile, "  }\n");
  fprintf(pOutputSrcFile, "  return image%s;\n", pImageName);
  fprintf(pOutputSrcFile, "}\n");

  fclose(pOutputSrcFile);

  printf("!\n");
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

  FILE *pHeaderFile = fopen("./image.h", "w");
  strcpy(pNameLong, "all:");

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
        fprintf(pHeaderFile, "char *getImage%s();\n", pName);

        processFile(directoryFile->d_name, pName);
      }
    }
    closedir(directory);
  }

  fprintf(pHeaderFile, "#endif\n\n");

  fclose(pHeaderFile);
}
