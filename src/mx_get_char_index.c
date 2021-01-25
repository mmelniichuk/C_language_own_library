#include "libmx.h"

int mx_get_char_index (const char *str, char c)
{
    int i = 0;

    if (!str || mx_strlen(str) == 0)
        return -2;

    while (str[i] && str[i] != '\0')
    {
        ++i;
    
        if (str[i] == c)
            return i;
    }
    return -1;
}
