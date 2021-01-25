#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    unsigned char *haystack = (unsigned char *)big;
    unsigned char *needle = (unsigned char *)little;

    if (!(big_len < little_len) && (big_len && little_len) > 0)
        for ( ; *haystack; haystack++)
            if (!mx_memcmp(haystack, needle, little_len - 1))
                return haystack;

    return NULL;
}
