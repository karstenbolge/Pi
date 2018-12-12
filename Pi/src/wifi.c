//https://stackoverflow.com/questions/400240/how-can-i-get-a-list-of-available-wireless-networks-on-linux
//https://stackoverflow.com/questions/36231396/iwlib-h-no-such-file-or-directory

//https://askubuntu.com/questions/16584/how-to-connect-and-disconnect-to-a-network-manually-in-terminal

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "../hdr/wifi.h"

wifiItem_t *wifiList = NULL;

wifiItem_t *getWifiList()
{
    return wifiList;
}

void deallocList()
{
    printf("Start\n");
    while (wifiList)
    {
        wifiItem_t *currentItem = wifiList;
        wifiList = currentItem->next;
        free(currentItem);
    }
}

void addWifiToList(wifiItem_t *wifi)
{
    // set list to first item
    if (!wifiList)
    {
        wifiList = wifi;
        return;
    }

    wifiItem_t *currentItem = wifiList;
    // check if item already exists
    while (currentItem && strcmp(currentItem->name, wifi->name))
    {
        currentItem = currentItem->next;
    }

    // if already in list the return
    if (currentItem)
    {
        // free this item
        free(wifi);
        return;
    }

    // Add to end of list
    currentItem = wifiList;
    while (currentItem->next)
    {
        currentItem = currentItem->next;
    }
    currentItem->next = wifi;
}

int scanForWifi(void)
{
    deallocList();

    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("sudo iwlist scan | grep ESSID", "r");
    if (fp == NULL)
    {
        printf("Failed to run command\n");
        return 1;
    }

    int firstLine = 1;
    /* Read the output a line at a time - output it. */
    while (fgets(path, sizeof(path) - 1, fp) != NULL)
    {
        char *name = strstr(path, "ESSID:\"");
        if (name)
        {
            // move past ESSID:
            name += 7;
            char *end = strstr(name, "\"");

            wifiItem_t *wifi = malloc(sizeof(wifiItem_t));
            memset(wifi, 0, sizeof(wifiItem_t));
            memcpy(wifi->name, name, end - name);

            addWifiToList(wifi);
        }
    }

    /* close */
    pclose(fp);

    return 0;
}
