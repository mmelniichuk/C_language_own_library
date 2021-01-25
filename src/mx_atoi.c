// function converts an ASCII string 
// to an integer as the <atoi> does

#include "libmx.h"

int mx_atoi (const char *str)
{
    int res = 0;
    int sign = 1;

    while (*str && mx_isspace(*str))
        ++str;
    
    if (*str == '-')
        sign = -1;
    
    if (*str == '-' || *str == '+')
        str++;
    
    while (*str && mx_isdigit(*str))
    {
        res = res * 10 + (*str - 48);
        str++;
    }
    return res * sign;
}
