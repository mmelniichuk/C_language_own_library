// function checks whether a number 
// is prime, returns true if the 
// number is prime, else false

#include "libmx.h"

bool mx_is_prime (int num)
{
	if (num < 0)
		return false;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) 
            return false;
	}  
    return true; 
}
