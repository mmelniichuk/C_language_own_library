#include "libmx.h"

void mx_del_strarr (char ***arr)
{
    char **del_arr;

    if (!arr)
        return;

    del_arr = *arr;

    for ( ; *del_arr; del_arr++)
        mx_strdel(del_arr);
        
    free(*arr);
    *arr = NULL;
}
