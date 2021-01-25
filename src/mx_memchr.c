#include "libmx.h"

void *mx_memchr (const void *s, int c, size_t n)
{
    unsigned char *temp = (unsigned char *) s;

    for (size_t i = 0; i < n; i++, temp++)
    {
        if (*temp == c)
            return temp;
    }
    return NULL;
}
