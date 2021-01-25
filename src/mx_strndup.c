#include "libmx.h"

char *mx_strndup (const char *s1, size_t n)
{
    char *dst = NULL;

    if (s1 == NULL && n == 0)
    {
        dst = mx_strnew(0);
        return dst;
    }
    dst = mx_strnew(n);
    mx_strncpy(dst, s1, n);
    return dst;
}
