typedef struct wifiItem
{
  char name[32];
  struct wifiItem *next;
} wifiItem_t;

int scanForWifi(void);
int connectToWifi(wifiItem_t *wifi);

wifiItem_t *getWifiList();