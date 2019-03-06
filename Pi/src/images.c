#include <stdio.h>
#include <string.h>
#include "../hdr/image.h"

void loadImage(char image[], char *pName)
{
  char pFileName[256];
  sprintf(pFileName, "./graphics/SoulTrain/image%s.o", pName);
  memset(&image, 0, 1440000);
  FILE *pOutputBinFile = fopen(pFileName, "rb");
  for (int i = 0; i < 160; i++)
  {
    for (int j = 0; j < 90; j++)
    {
      unsigned char redChar;
      unsigned char greenChar;
      unsigned char blueChar;
      fread(&redChar, 1, 1, pOutputBinFile);
      fread(&greenChar, 1, 1, pOutputBinFile);
      fread(&blueChar, 1, 1, pOutputBinFile);

      for (int k = 0; k < 4; k++)
      {
        for (int l = 0; l < 4; l++)
        {
          // round corners
          if ((k == 0 || k == 3) && (l == 0 || l == 3))
            ;
          else
          {
            image[((j * 5 + l) * 800 + (i * 5 + k)) * 4] = redChar;
            image[((j * 5 + l) * 800 + (i * 5 + k)) * 4 + 1] = greenChar;
            image[((j * 5 + l) * 800 + (i * 5 + k)) * 4 + 2] = blueChar;
          }
        }
      }
    }
  }

  fclose(pOutputBinFile);
}
