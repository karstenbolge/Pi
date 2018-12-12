typedef struct wifiItem
{
  char name[32];
  struct wifiItem *next;
} wifiItem_t;

int scanForWifi(void);

wifiItem_t *getWifiList();