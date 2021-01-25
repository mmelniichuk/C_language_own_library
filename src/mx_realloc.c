#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
  size_t len = malloc_size(ptr);
  unsigned char *new = NULL;

  if ((int)size < 0)
  {
    free(ptr);
    return NULL;
  }  

  if (size != 0 && len > size)
    return ptr;

  new = malloc(size);
  if (ptr != NULL && size != 0)
    new = mx_memcpy(new, ptr, size);

  free(ptr);
  return new;
}
