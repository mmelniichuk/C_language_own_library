#include "libmx.h"

double mx_pow (double n, unsigned int pow)
{
    double res = 1;
    unsigned int i = 0;
    
    if (pow == 0)
        return 1;
    
    for (i = 0; i < pow; i++)
    {
        res = res * n;
    }
    return res;
}
