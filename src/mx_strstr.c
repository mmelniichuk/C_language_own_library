#include "libmx.h"

static char *libmx_strchr (const char *s, int c)
{
    for ( ; *s != '\0'; s++)
        if (*s == c)
            return (char *) s;
    return 0;
}

char *mx_strstr (const char *haystack, const char *needle)
{
	const char *p = haystack;

    if (!needle || mx_strlen(needle) == 0)
        return (char *) p;

    for ( ; (p = libmx_strchr(p, *needle)) != 0; p++)
	{
        if (mx_strncmp(p, needle, mx_strlen(needle)) == 0)
            return (char *) p;
    }
    return 0;
}
