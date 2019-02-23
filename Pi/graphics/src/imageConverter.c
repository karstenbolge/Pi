#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void processLine(char *pLine, FILE *pOutputFile, FILE *pOutputSrcFile)
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

    fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber, pixel[pixelNumber]);
    fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 1, pixel[pixelNumber + 1]);
    fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 2, pixel[pixelNumber + 2]);
    fprintf(pOutputSrcFile, "      image00150[%ld] = 0x%02x;\n", pixelNumber + 3, pixel[pixelNumber + 3]);

    pixelNumber += 4;
    count += 4;
  }
}

int main(void)
{
  char *data;
  char readBuffer[CONFIG_BUFFER_SIZE];
  pixelNumber = 0;

  printf("start\n");
  FILE *pOutputFile = fopen("./SoulTrain/00150.h", "w");
  FILE *pOutputSrcFile = fopen("./SoulTrain/image00150.c", "w");
  FILE *pInputFile = fopen("./SoulTrain/vlcsnap-00150.h", "r");
  int inLine = 0;

  fprintf(pOutputFile, "unsigned char image00150[640 * 360 * 4 + 1] = {\n");

  fprintf(pOutputSrcFile, "unsigned char image00150[640 * 360 * 4 + 1];\n");
  fprintf(pOutputSrcFile, "int image00150created = 0;\n\n");

  fprintf(pOutputSrcFile, "void createImage00150()\n");
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  int i = 0;\n");

  while (fgets(readBuffer, CONFIG_BUFFER_SIZE, pInputFile) != NULL)
  {
    if (memcmp(readBuffer, "    \"\";", 7) == 0)
    {
      inLine = 0;
    }

    if (inLine == 1)
    {
      processLine(readBuffer + 5, pOutputFile, pOutputSrcFile);
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

  fprintf(pOutputSrcFile, "  }\n\n");
  fprintf(pOutputSrcFile, "char *getImage00150()\n");
  fprintf(pOutputSrcFile, "{\n");
  fprintf(pOutputSrcFile, "  if (!image00150created)\n");
  fprintf(pOutputSrcFile, "  {\n");
  fprintf(pOutputSrcFile, "    createImage00150();\n");
  fprintf(pOutputSrcFile, "  }\n");
  fprintf(pOutputSrcFile, "  return image00150;\n");
  fprintf(pOutputSrcFile, "}\n");

  fclose(pInputFile);
  fclose(pOutputFile);
  fclose(pOutputSrcFile);

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

  // just corped, and split to tiles
  pOutputFile = fopen("./SoulTrain/00150-v3.h", "w");
  fprintf(pOutputFile, "unsigned char image00150[800 * 480 * 4 + 1] = {\n");
  for (int j = 0; j < 360; j++)
  {
    for (int i = 20; i < 620; i++)
    {
      if (i % 3 == 2)
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

    if (j % 3 == 2)
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

  // pixel average colors 200 x 120
  for (int i = 0; i < 200; i++)
  {
    for (int j = 0; j < 120; j++)
    {
      long redAverage = 0;
      long greenAverage = 0;
      long blueAverage = 0;
      for (int k = 0; k < 3; k++)
      {
        for (int l = 0; l < 3; l++)
        {
          redAverage += pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k)];
          greenAverage += pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k) + 1];
          blueAverage += pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k) + 2];
        }
      }

      for (int k = 0; k < 3; k++)
      {
        for (int l = 0; l < 3; l++)
        {
          pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k)] = redAverage / 9;
          pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k) + 1] = greenAverage / 9;
          pixel[(j * 3 + l) * 640 + 20 + (i * 3 + k) + 2] = blueAverage / 9;
        }
      }
    }
  }

  // corped, split to tiles and average color
  pOutputFile = fopen("./SoulTrain/00150-v4.h", "w");
  fprintf(pOutputFile, "unsigned char image00150[800 * 480 * 4 + 1] = {\n");
  for (int j = 0; j < 360; j++)
  {
    for (int i = 20; i < 620; i++)
    {
      if (i % 3 == 2)
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

    if (j % 3 == 2)
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
};
