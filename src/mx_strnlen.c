// function determines the length of 
// a fixed-size string

#include "libmx.h"

size_t mx_strnlen (const char *str, size_t len)
{
    for (size_t size = 0; size < len; size++)
    {
        if (str[size] == '\0')
            return size;
    }  
    return len;
}
