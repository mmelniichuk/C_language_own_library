#include "libmx.h"

void *mx_memset (void *b, int c, size_t len)
{
    unsigned char *p = b;

    if (b == NULL)
        return NULL;

    while (len > 0)
    {
        *p = c;
        p++;
        len--;
    }
    return b;
}
