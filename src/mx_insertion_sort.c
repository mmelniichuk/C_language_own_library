// function sorts an array of strings in place by length 
// in ascending order; uses the insertion sort algorithm;
// returns the number of shift operations

#include "libmx.h"

int mx_insertion_sort(char **arr, int size)
{
    int count = 0;
    char *tmp = NULL;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (mx_strlen(arr[j]) > mx_strlen(arr[j + 1]))
            {
                tmp = arr[j];    
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                count++;
            }        
        }    
    }
    return count;
}
