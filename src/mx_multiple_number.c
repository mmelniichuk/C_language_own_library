// function checks whether a natural number 
// mult is a multiple of a number n, 
// returns true if the number mult is the 
// multiple of the number n, otherwise false

#include "libmx.h"

bool mx_multiple_number (int n, int mult)
{
	if (mult % n == 0)
		return true;
	else
		return false;
}
