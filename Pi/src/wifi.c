//https://stackoverflow.com/questions/400240/how-can-i-get-a-list-of-available-wireless-networks-on-linux
//https://stackoverflow.com/questions/36231396/iwlib-h-no-such-file-or-directory

//https://askubuntu.com/questions/16584/how-to-connect-and-disconnect-to-a-network-manually-in-terminal

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

typedef struct wifiItem
{
    char name[32];
    struct wifiItem *next;
} wifiItem_t;

wifiItem_t *wifiList = NULL;

void deallocList()
{
    while (wifiList)
    {
        wifiItem_t *currentItem = wifiList;
        while (currentItem->next)
        {
            currentItem = currentItem->next;
        }
        free(currentItem);
    }
}

int testWifi(void)
{
    deallocList();

    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("nmcli dev wifi", "r");
    if (fp == NULL)
    {
        printf("Failed to run command\n");
        exit(1);
    }

    int firstLine = 1;
    /* Read the output a line at a time - output it. */
    while (fgets(path, sizeof(path) - 1, fp) != NULL)
    {
        if (firstLine == 1)
        {
            firstLine = 0;
            continue;
        }
        printf("%s", path);
        int len = 8;
        while (*(path + len) != 0 && *(path + len) != ' ')
        {
            len++;
        }
        printf("%d", len);

        wifiItem_t *wifi = malloc(sizeof(wifiItem_t));
        memset(wifi, 0, sizeof(wifiItem_t));
        memcpy(path + 8, wifi->name, len - 9);
    }

    /* close */
    pclose(fp);

    return 0;
}
