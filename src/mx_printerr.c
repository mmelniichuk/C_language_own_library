// function outputs a string of characters 
// to the standard error stream <stderr>

#include "libmx.h"

void mx_printerr (const char *s)
{
    write(2, s, mx_strlen(s));
}
