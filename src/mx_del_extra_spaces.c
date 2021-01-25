#include "libmx.h"

char *mx_del_extra_spaces (const char *str)
{
    int i = 0, j = 0;

    if (!str || mx_strlen(str) == 0)
        return NULL;

    char *temp = mx_strnew (mx_strlen(str));

    for (i = 0; str[i] != '\0'; i++)
    {
        if (mx_isspace(str[i]) == 0)
        {
            temp[j] = str[i];
            j++;
        }
        if (mx_isspace(str[i]) == 0 && mx_isspace(str[i + 1]) == 1)
        {
            temp[j] = ' ';
            j++;
        }
    }
    char *res = mx_strtrim(temp);
    mx_strdel(&temp);
    return res;
}
