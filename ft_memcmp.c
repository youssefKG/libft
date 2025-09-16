#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
  size_t i;

  i = 0;
  while (i < n && (char )*(char *)(s1 + i) == (char )*(char *)s2(i + 1)) 
    i++;
  return (char)s1[i] - (char)s2[i];
}

