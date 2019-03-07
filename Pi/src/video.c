#include "../hdr/video.h"
#include "../graphics/image.h"

uint8_t wheelFrame;
uint8_t sideTrainFrame;
uint8_t sideSoulTrain;

//00002 - 00014
//00017 - 00033
//00033 - 00048
//00049 - 00120

//01430 - 01529
//01530 - 01611
//01612 - 01754
//02118 - 02140

void startWheelVideo()
{
  wheelFrame = 5;
}

char *getNextWheelFrame()
{
  wheelFrame++;
  if (wheelFrame > 5)
  {
    wheelFrame = 0;
  }

  switch (wheelFrame)
  {
  case 0:
    return image00150;
  case 1:
    return image00152;
  case 2:
    return image00155;
  case 3:
    return image00158;
  case 4:
    return image00161;
  case 5:
    return image00163;
  }
}

void startTrainSideVideo()
{
  sideTrainFrame = 9;
}

char *getNextTrainSide()
{
  sideTrainFrame++;
  if (sideTrainFrame > 9)
  {
    sideTrainFrame = 0;
  }

  switch (sideTrainFrame)
  {
  case 0:
    return image00123;
  case 1:
    return image00124;
  case 2:
    return image00125;
  case 3:
    return image00127;
  case 4:
    return image00128;
  case 5:
    return image00130;
  case 6:
    return image00133;
  case 7:
    return image00135;
  case 8:
    return image00137;
  case 9:
    return image00139;
  }
}

void startSoulTrainVideo()
{
  sideSoulTrain = 87;
}

char *getNextSoulTrain()
{
  sideSoulTrain++;
  if (sideSoulTrain > 87)
  {
    sideSoulTrain = 0;
  }

  switch (sideSoulTrain)
  {
  case 0:
    return image00587;
  case 1:
    return image00588;
  case 2:
    return image00589;
  case 3:
    return image00590;
  case 4:
    return image00591;
  case 5:
    return image00592;
  case 6:
    return image00593;
  case 7:
    return image00594;
  case 8:
    return image00595;
  case 9:
    return image00596;
  case 10:
    return image00597;
  case 11:
    return image00598;
  case 12:
    return image00599;
  case 13:
    return image00600;
  case 14:
    return image00601;
  case 15:
    return image00602;
  case 16:
    return image00603;
  case 17:
    return image00604;
  case 18:
    return image00605;
  case 19:
    return image00606;
  case 20:
    return image00607;
  case 21:
    return image00608;
  case 22:
    return image00609;
  case 23:
    return image00610;
  case 24:
    return image00611;
  case 25:
    return image00612;
  case 26:
    return image00613;
  case 27:
    return image00614;
  case 28:
    return image00615;
  case 29:
    return image00616;
  case 30:
    return image00617;
  case 31:
    return image00618;
  case 32:
    return image00619;
  case 33:
    return image00620;
  case 34:
    return image00621;
  case 35:
    return image00622;
  case 36:
    return image00623;
  case 37:
    return image00624;
  case 38:
    return image00625;
  case 39:
    return image00626;
  case 40:
    return image00627;
  case 41:
    return image00628;
  case 42:
    return image00629;
  case 43:
    return image00630;
  case 44:
    return image00631;
  case 45:
    return image00632;
  case 46:
    return image00633;
  case 47:
    return image00634;
  case 48:
    return image00635;
  case 49:
    return image00636;
  case 50:
    return image00637;
  case 51:
    return image00638;
  case 52:
    return image00639;
  case 53:
    return image00640;
  case 54:
    return image00641;
  case 55:
    return image00642;
  case 56:
    return image00643;
  case 57:
    return image00644;
  case 58:
    return image00645;
  case 59:
    return image00646;
  case 60:
    return image00647;
  case 61:
    return image00648;
  case 62:
    return image00649;
  case 63:
    return image00650;
  case 64:
    return image00651;
  case 65:
    return image00652;
  case 66:
    return image00653;
  case 67:
    return image00654;
  case 68:
    return image00655;
  case 69:
    return image00656;
  case 70:
    return image00657;
  case 71:
    return image00658;
  case 72:
    return image00659;
  case 73:
    return image00660;
  case 74:
    return image00661;
  case 75:
    return image00662;
  case 76:
    return image00663;
  case 77:
    return image00664;
  case 78:
    return image00665;
  case 79:
    return image00666;
  case 80:
    return image00667;
  case 81:
    return image00668;
  case 82:
    return image00669;
  case 83:
    return image00670;
  case 84:
    return image00671;
  case 85:
    return image00672;
  case 86:
    return image00673;
  case 87:
    return image00674;
  }
}
