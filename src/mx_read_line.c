#include "libmx.h"

static int libmx_strlen (const char *s)
{
    int count = 0;

    if (s)
        while (s[count] != '\0')
            count++;
    return count;
}

static void *libmx_realloc (void *ptr, size_t size)
{
    char *new = mx_strnew(size);
    char *p = (char *)ptr;

    if (new == NULL)
        return NULL;
    if (ptr == NULL)
        return new;
    for (unsigned int i = 0; i < size; i++)
        new[i] = p[i];
    free(ptr);
    return new;
}

static void libmx_free(char **lineptr, char *buf, int *count, int chars)
{
    chars == 0 && (*count) == 0 ? (*count)-- : (*count);
    mx_strdel(&buf);

    if (*lineptr == NULL && (*count) < 1)
    {
        *lineptr = malloc(1);
        *lineptr[0] = '\0';
    }
}

int mx_read_line (char **lineptr, size_t buf_size, char delim, const int fd)
{
    char *buf = mx_strnew(1);
    int count = 0;
    int chars;

    if ( fd < 0)
        count = -2;

    for ( ; (chars = read(fd, buf, (buf_size / buf_size))) > 0; )
    {
        if (*buf == delim)
            break;
        *lineptr = libmx_realloc(*lineptr,
                            libmx_strlen(*lineptr) + libmx_strlen(buf));
        *lineptr = mx_strcat(*lineptr, buf);
        count++;
    }
    libmx_free(&(*lineptr), buf, &count, chars);
    return count;
}
