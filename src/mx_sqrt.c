#include "libmx.h"

int mx_sqrt (int x)
{
    int res = 1;
    
    for (res = 1; res <= x / res; res++)
    {
        if (x == res * res)
            return res;
    }
    return 0;
}
