#ifndef _WIFI_H_
#define _WIFI_H_

typedef struct wifiItem
{
  char name[32];
  struct wifiItem *next;
} wifiItem_t;

int scanForWifi(void);
int connectToWifi(wifiItem_t *wifi);

wifiItem_t *getWifiList();

#endif