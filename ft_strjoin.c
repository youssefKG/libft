#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2) {
  size_t s1_len;
  size_t s2_len;
  char *result;

  if (!s1 || !s2)
    return NULL;
  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);

  result =  (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
  if(!result)
    return NULL;
  ft_memcpy(result, s1, s1_len);
  ft_memcpy(result + s1_len, s2, s2_len);
  result[s1_len + s2_len] = '\0';
  return result;
}
