#ifndef NETWORK_H
#define NETWORK_H

#include <sys/ioctl.h>
#include <net/if.h>

#include <string.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <stdarg.h>
#include <errno.h>

#define NETWORK_DEVICE  "rausb0"
//#define NETWORK_DEVICE  "wlan1"


bool isWifiConnected(void);


#endif // NETWORK_H
