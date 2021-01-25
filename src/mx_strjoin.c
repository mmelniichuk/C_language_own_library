#include "libmx.h"

char *mx_strjoin (const char *s1, const char *s2)
{
    char *res;
    
    if (s1 == NULL && s2 == NULL)
        return NULL;

    if(s1 == NULL)
        return mx_strdup(s2);

    else if(s2 == NULL)
        return mx_strdup(s1);
    
    else
    {
        res = mx_strnew((mx_strlen(s1) + mx_strlen(s2) - 1));
        res = mx_strcat(res, s1);
        res = mx_strcat(res, s2);
    }
    return res;
}
