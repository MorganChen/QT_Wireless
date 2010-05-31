#include "network.h"

bool isWifiConnected()
{
    int inet_sock;
    struct ifreq ifr;

    inet_sock = socket(AF_INET, SOCK_DGRAM, 0);
    //if(inet_sock<0)
    //    printf("cann't build socket\n");
    strcpy(ifr.ifr_name, NETWORK_DEVICE);
    if (ioctl(inet_sock, SIOCGIFADDR, &ifr) < 0){
        close(inet_sock);
        return false;
    } else {
        close(inet_sock);
        return true;
    }
}
