#include "libmx.h"

static void mx_str_to_arr (const char *s, char c, char **arr)
{
    int len = 0;
    int i = 0, j = 0, k = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c && len == 0)
            k = i;
        if (s[i] != c && s[i] != 0)
            len++;
        if (len > 0 && (s[i + 1] == c || s[i + 1] == 0))
        {
            arr[j] = mx_strnew(len);
            arr[j] = mx_strncpy(arr[j], &(s[k]), len);
            len = 0;
            j++;
        }
    }
    arr[j] = NULL;
}

char **mx_strsplit (const char *s, char c)
{
    char **arr = NULL;

    if (!s)
        return NULL;

    arr = (char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
    mx_str_to_arr(s, c, arr);
    
    return arr;
}
