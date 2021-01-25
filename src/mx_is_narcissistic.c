// function checks whether a number 
// is narcissistic, returns true if 
// the number is narcissistic, else false

#include "libmx.h"

bool mx_is_narcissistic (int num)
{
	int sum, countpow = 0;
	int original = num;

	if (num < 0)
		return false;
	
	while (num != 0)
	{
		countpow++;
		num = num / 10;
	}
	num = original;
	
	while (num != 0)
	{
		sum = sum + mx_pow(num % 10, countpow);
	    num = num / 10;
	}
	if (sum == original)
		return true;
	
	return false;
}
