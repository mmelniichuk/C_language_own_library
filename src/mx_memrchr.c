#include "libmx.h"

void *mx_memrchr (const void *s, int c, size_t n)
{
    unsigned char *temp = (unsigned char *) s + mx_strlen(s);

    for (; n > 0; n--, temp--)
    {
        if (*temp == c)
            return temp;
    }
    return NULL;
}
