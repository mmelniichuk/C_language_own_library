#include "libmx.h"

static void swap_char(char **arr, int i, int j, int *swap)
{
    char *temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    (*swap)++;
}

int mx_quicksort (char **arr, int left, int right)
{
    int count = 0; 
    int pivot = (right + left) / 2;
    int i = left;
    int j = right;

    if (!arr)
        return -1;

    if (i < j)
    {
        for ( ; mx_strlen(arr[i]) < mx_strlen(arr[pivot]); i++);
        for ( ; mx_strlen(arr[j]) > mx_strlen(arr[pivot]); j--);

        if (i < j && mx_strlen(arr[i]) != mx_strlen(arr[j]))
            swap_char(arr, i, j, &count);
        
        ++i < right ? count += mx_quicksort(arr, i, right) : i;
        --j > left ? count += mx_quicksort(arr, left, j) : j;
    }
    return count;
}
