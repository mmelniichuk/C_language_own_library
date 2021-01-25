#include "libmx.h"

char *mx_strdup(const char *str)
{
    char *dup_str = mx_strnew(mx_strlen(str));

    mx_strcpy(dup_str, str);
    return dup_str;
}
