// function prints all array numbers 
// to the standard output

#include "libmx.h"

void mx_print_arr_int (const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
		mx_printint(arr[i]);
		mx_printchar('\n');
	}
}
