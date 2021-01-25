#include "libmx.h"

int mx_binary_search (char **arr, int size, const char *s, int *count)
{
    int beggin = 0;
    int end = size - 1;
    int mid = 0;
    int res = -1;

    while(beggin <= end)
    {
        (*count)++;
        mid = beggin + (end - beggin) / 2;

        if(mx_strcmp(arr[mid], s) == 0)
            return mid;

        if(mx_strcmp(arr[mid], s) < 0)
            beggin = mid + 1;
        
        else
            end = mid - 1;
    }
    if (res == - 1)
        (*count) = 0;

    return res;
}
