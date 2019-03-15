#include "../hdr/image.h"
#include "../hdr/window.h"
#include "../hdr/display.h"

void loadAllImages()
{
  int numberLoaded = 1;
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  loadImage(&image00615[0], "00615");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00592[0], "00592");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00101[0], "00101");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00099[0], "00099");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00029[0], "00029");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00069[0], "00069");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00058[0], "00058");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00100[0], "00100");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00107[0], "00107");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00137[0], "00137");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00042[0], "00042");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00082[0], "00082");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00102[0], "00102");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00012[0], "00012");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00064[0], "00064");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00089[0], "00089");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00068[0], "00068");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00115[0], "00115");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00038[0], "00038");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00648[0], "00648");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00607[0], "00607");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00078[0], "00078");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00034[0], "00034");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00050[0], "00050");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00600[0], "00600");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00599[0], "00599");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00095[0], "00095");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00076[0], "00076");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00117[0], "00117");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00018[0], "00018");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00113[0], "00113");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00588[0], "00588");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00030[0], "00030");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00635[0], "00635");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00672[0], "00672");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00051[0], "00051");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00612[0], "00612");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00027[0], "00027");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00059[0], "00059");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00081[0], "00081");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00004[0], "00004");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00005[0], "00005");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00104[0], "00104");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00085[0], "00085");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00023[0], "00023");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00161[0], "00161");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00011[0], "00011");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00026[0], "00026");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00158[0], "00158");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00036[0], "00036");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00070[0], "00070");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00130[0], "00130");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00048[0], "00048");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00673[0], "00673");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00619[0], "00619");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00627[0], "00627");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00080[0], "00080");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00008[0], "00008");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00155[0], "00155");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00634[0], "00634");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00021[0], "00021");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00128[0], "00128");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00090[0], "00090");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00633[0], "00633");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00666[0], "00666");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00040[0], "00040");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00622[0], "00622");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00067[0], "00067");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00024[0], "00024");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00114[0], "00114");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00596[0], "00596");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00614[0], "00614");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00591[0], "00591");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00106[0], "00106");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00610[0], "00610");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00105[0], "00105");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00110[0], "00110");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00084[0], "00084");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00133[0], "00133");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00656[0], "00656");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00641[0], "00641");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00055[0], "00055");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00098[0], "00098");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00595[0], "00595");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00047[0], "00047");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00652[0], "00652");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00093[0], "00093");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00097[0], "00097");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00073[0], "00073");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00665[0], "00665");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00629[0], "00629");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00617[0], "00617");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00007[0], "00007");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00645[0], "00645");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00589[0], "00589");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00650[0], "00650");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00077[0], "00077");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00033[0], "00033");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00112[0], "00112");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00590[0], "00590");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00056[0], "00056");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00624[0], "00624");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00109[0], "00109");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00119[0], "00119");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00674[0], "00674");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00062[0], "00062");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00111[0], "00111");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00152[0], "00152");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00603[0], "00603");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00057[0], "00057");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00653[0], "00653");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00632[0], "00632");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00003[0], "00003");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00014[0], "00014");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00041[0], "00041");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00659[0], "00659");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00593[0], "00593");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00053[0], "00053");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00638[0], "00638");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00087[0], "00087");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00063[0], "00063");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00640[0], "00640");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00044[0], "00044");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00609[0], "00609");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00054[0], "00054");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00661[0], "00661");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00642[0], "00642");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00667[0], "00667");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00621[0], "00621");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00626[0], "00626");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00083[0], "00083");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00022[0], "00022");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00028[0], "00028");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00127[0], "00127");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00125[0], "00125");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00646[0], "00646");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00647[0], "00647");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00639[0], "00639");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00657[0], "00657");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00601[0], "00601");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00061[0], "00061");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00071[0], "00071");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00628[0], "00628");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00670[0], "00670");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00625[0], "00625");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00594[0], "00594");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00046[0], "00046");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00604[0], "00604");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00035[0], "00035");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00074[0], "00074");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00597[0], "00597");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00655[0], "00655");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00602[0], "00602");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00606[0], "00606");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00644[0], "00644");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00663[0], "00663");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00605[0], "00605");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00124[0], "00124");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00031[0], "00031");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00649[0], "00649");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00037[0], "00037");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00065[0], "00065");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00108[0], "00108");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00049[0], "00049");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00587[0], "00587");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00088[0], "00088");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00654[0], "00654");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00631[0], "00631");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00671[0], "00671");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00662[0], "00662");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00075[0], "00075");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00103[0], "00103");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00664[0], "00664");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00669[0], "00669");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00091[0], "00091");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00009[0], "00009");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00616[0], "00616");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00079[0], "00079");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00002[0], "00002");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00120[0], "00120");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00135[0], "00135");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00630[0], "00630");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00150[0], "00150");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00060[0], "00060");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00611[0], "00611");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00123[0], "00123");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00139[0], "00139");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00020[0], "00020");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00637[0], "00637");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00598[0], "00598");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00006[0], "00006");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00017[0], "00017");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00636[0], "00636");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00013[0], "00013");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00094[0], "00094");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00086[0], "00086");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00019[0], "00019");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00623[0], "00623");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00643[0], "00643");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00651[0], "00651");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00066[0], "00066");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00620[0], "00620");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00092[0], "00092");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00660[0], "00660");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00118[0], "00118");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00608[0], "00608");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00668[0], "00668");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00658[0], "00658");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00613[0], "00613");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00052[0], "00052");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00618[0], "00618");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00010[0], "00010");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00025[0], "00025");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00032[0], "00032");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00072[0], "00072");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00096[0], "00096");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00163[0], "00163");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
  loadImage(&image00116[0], "00116");
  drawProgress(20 * ++numberLoaded / getNumberOfImages(), 4, DMD_WIDTH - 83 - 1, &color);
  refreshDmd();
}

int getNumberOfImages()
{
  return 219;
}
