#include "libmx.h"

int mx_get_substr_index (const char *str, const char *sub)
{
    int index = 0;

    if (str == NULL || sub == NULL 
            || mx_strlen(str) == 0
            || mx_strlen(sub) == 0)
        return -2;
    
    char *res = mx_strstr(str, sub);

    while (res != 0 && index >= 0)
    {
        char c = res[0];
        index = mx_get_char_index(str, c);
        return index;
    }
    return -1;   
}
