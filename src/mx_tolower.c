// function has the same
// behaviour as <tolower>

#include "libmx.h"

int mx_tolower (int c)
{
	if (c >= 65 && c <= 90)
		return c + 32;

	else if (c >= 97 && c <= 122)
		return c;

	return 0;
}
