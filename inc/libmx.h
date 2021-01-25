#ifndef LIBMX_H
#define LIBMX_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>
#include <errno.h>
#include <wchar.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <malloc/malloc.h>

// Act: Utils pack (14)

void mx_printchar(char c);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char*s); 
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
void mx_foreach(int *arr, int size, void (*f)(int));
double mx_pow(double n, unsigned int pow);
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_itoa(int number);
int mx_sqrt(int x);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);

//Act: String pack (24)

int mx_strlen(const char *s);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char c);
int mx_get_char_index(const char *str, char c);
int mx_get_substr_index(const char *str, const char *sub);
int mx_strcmp(const char *s1, const char *s2);
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n); 
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strstr(const char *haystack, const char *needle); 
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_del_extra_spaces(const char *str);
char **mx_strsplit(const char *s, char c);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_file_to_str(const char *file);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);


//Act: Memory pack (9)

int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);

//Act: List pack (7)

typedef struct s_list
{
	void *data;
	struct s_list *next;
}		t_list;


t_list *mx_create_node(void *data);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_front(t_list **head);
void mx_pop_back(t_list **head);
int mx_list_size(t_list *list);


// other usefull functions (20)

size_t mx_strnlen (const char *str, size_t len);
int mx_strncmp (const char *s1, const char *s2, int n);
int mx_insertion_sort(char **arr, int size);
int mx_linear_search(char **arr, const char *s);
int mx_atoi (const char *str);
int mx_tolower (int c);
int mx_toupper (int c);
void mx_printerr (const char *s);
void mx_print_arr_int (const int *arr, int size);
void mx_sort(int *arr, int size, bool (*f)(int, int));
void mx_sort_arr_int (int *arr, int size);
void mx_hexadecimal (void);
bool mx_isspace (char c);
bool mx_is_narcissistic (int num);
bool mx_multiple_number (int n, int mult);
bool mx_is_odd (int value);
bool mx_is_prime (int num);
bool mx_isdigit (int c);


#endif
