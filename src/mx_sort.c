 // function sorts an array of integers in place 
 // in the order defined by the function f()
 
#include "libmx.h"

void mx_sort(int *arr, int size, bool (*f)(int, int))
{
    int i, j;
    int tmp = 0;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (f(arr[j], arr[j+1]))
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
