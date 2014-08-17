#include <stdio.h>
#include "HyDebug.h"


int main(int argc, const char *argv[])
{
    int a = 10;
    HYDEBUG_QUIT("xx %d", a);
 //   int a = 10;
//    HyDebug("xx %d", a);
    return 0;
}

