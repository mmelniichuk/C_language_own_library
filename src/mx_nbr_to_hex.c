#include "libmx.h"

static int nbr_len (unsigned long nbr, int len)
{
    while (nbr > 0)
    {
        nbr /= 16;
        len++;
    }
    return len;
}

char *mx_nbr_to_hex (unsigned long nbr)
{
    int len = 0;
    int temp = 0;
    char *hex = NULL;

    if (nbr == 0)
    {
        hex = mx_strnew(1);
        hex[0] = '0';

        return hex;
    }

    len = nbr_len (nbr, len);
    hex = mx_strnew (len);

    for (int i = len - 1; i >= 0; i--)
    {
        temp = nbr % 16;
        nbr /= 16;

        if (temp < 10)
            hex[i] = temp + 48;
        else 
            hex[i] = temp + 87;
    }
    return hex;
}
