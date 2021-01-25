// function has the same 
// behaviour as <toupper>

#include "libmx.h"

int mx_toupper (int c)
{
	if( c >= 97 && c <= 122)
		return c - 32;

	else if (c >= 65 && c <= 90)
		return c;
		
	return 0;
}
