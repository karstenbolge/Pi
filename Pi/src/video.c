#include "../hdr/video.h"
#include "../graphics/image.h"

uint8_t wheelFrame;
uint8_t sideTrainFrame;
uint8_t sideSoulTrain;

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

/*  switch (wheelFrame)
  {
  case 0:
    return getImage00150();
  case 1:
    return getImage00152();
  case 2:
    return getImage00155();
  case 3:
    return getImage00158();
  case 4:
    return getImage00161();
  case 5:
    return getImage00163();
  }*/
}

void startTrainSide()
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

  /*  switch (sideTrainFrame)
  {
  case 0:
    return getImage00123();
  case 1:
    return getImage00124();
  case 2:
    return getImage00125();
  case 3:
    return getImage00127();
  case 4:
    return getImage00128();
  case 5:
    return getImage00130();
  case 6:
    return getImage00133();
  case 7:
    return getImage00135();
  case 8:
    return getImage00137();
  case 9:
    return getImage00139();
  }*/
}

void startSoulTrain()
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

  /*  switch (sideSoulTrain)
  {
  case 0:
    return getImage00587();
  case 1:
    return getImage00588();
  case 2:
    return getImage00589();
  case 3:
    return getImage00590();
  case 4:
    return getImage00591();
  case 5:
    return getImage00592();
  case 6:
    return getImage00593();
  case 7:
    return getImage00594();
  case 8:
    return getImage00595();
  case 9:
    return getImage00596();
  case 10:
    return getImage00597();
  case 11:
    return getImage00598();
  case 12:
    return getImage00599();
  case 13:
    return getImage00600();
  case 14:
    return getImage00601();
  case 15:
    return getImage00602();
  case 16:
    return getImage00603();
  case 17:
    return getImage00604();
  case 18:
    return getImage00605();
  case 19:
    return getImage00606();
  case 20:
    return getImage00607();
  case 21:
    return getImage00608();
  case 22:
    return getImage00609();
  case 23:
    return getImage00610();
  case 24:
    return getImage00611();
  case 25:
    return getImage00612();
  case 26:
    return getImage00613();
  case 27:
    return getImage00614();
  case 28:
    return getImage00615();
  case 29:
    return getImage00616();
  case 30:
    return getImage00617();
  case 31:
    return getImage00618();
  case 32:
    return getImage00619();
  case 33:
    return getImage00620();
  case 34:
    return getImage00621();
  case 35:
    return getImage00622();
  case 36:
    return getImage00623();
  case 37:
    return getImage00624();
  case 38:
    return getImage00625();
  case 39:
    return getImage00626();
  case 40:
    return getImage00627();
  case 41:
    return getImage00628();
  case 42:
    return getImage00629();
  case 43:
    return getImage00630();
  case 44:
    return getImage00631();
  case 45:
    return getImage00632();
  case 46:
    return getImage00633();
  case 47:
    return getImage00634();
  case 48:
    return getImage00635();
  case 49:
    return getImage00636();
  case 50:
    return getImage00637();
  case 51:
    return getImage00638();
  case 52:
    return getImage00639();
  case 53:
    return getImage00640();
  case 54:
    return getImage00641();
  case 55:
    return getImage00642();
  case 56:
    return getImage00643();
  case 57:
    return getImage00644();
  case 58:
    return getImage00645();
  case 59:
    return getImage00646();
  case 60:
    return getImage00647();
  case 61:
    return getImage00648();
  case 62:
    return getImage00649();
  case 63:
    return getImage00650();
  case 64:
    return getImage00651();
  case 65:
    return getImage00652();
  case 66:
    return getImage00653();
  case 67:
    return getImage00654();
  case 68:
    return getImage00655();
  case 69:
    return getImage00656();
  case 70:
    return getImage00657();
  case 71:
    return getImage00658();
  case 72:
    return getImage00659();
  case 73:
    return getImage00660();
  case 74:
    return getImage00661();
  case 75:
    return getImage00662();
  case 76:
    return getImage00663();
  case 77:
    return getImage00664();
  case 78:
    return getImage00665();
  case 79:
    return getImage00666();
  case 80:
    return getImage00667();
  case 81:
    return getImage00668();
  case 82:
    return getImage00669();
  case 83:
    return getImage00670();
  case 84:
    return getImage00671();
  case 85:
    return getImage00672();
  case 86:
    return getImage00673();
  case 87:
    return getImage00674();
  }*/
}
