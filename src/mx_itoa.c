#include "libmx.h"

char *mx_itoa (int number)
{
    char *str = NULL;
    long int temp = number;
    long int temp2 = number;
    int len = 1;

    temp < 0 ? (len++, temp *= -1) : len;

    for ( ; number / 10; len++)
        number /= 10;
    str = mx_strnew(len);

    for (len -= 1; len >= 0; temp /= 10)
        str[len--] = (temp % 10) + '0';
    temp2 < 0 ? (str[0] = '-') : str[0];
    
    return str;
} 
