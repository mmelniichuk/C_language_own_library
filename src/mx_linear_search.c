// function searches the strings in the sorted NULL-
// terminated array; uses the linear search algorithm;
// returns the index of the found string in the array,
// returns -1 in case of errors or if the string has 
// not been found

#include "libmx.h"

int mx_linear_search(char **arr, const char *s)
{
    for (int i = 0; arr[i]; i++)
    {
        if (mx_strcmp(arr[i], s) == 0)
            return i;
    }
    return -1;
}
