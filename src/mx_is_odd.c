// function checks whether
// number is odd or even, 
// returns true if number 
// is odd or false if even

#include "libmx.h"

bool mx_is_odd (int value)
{
	if (value % 2 != 0)
		return true;
	else
		return false;
}
