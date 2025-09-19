#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


int main() {
  char *s = "youssef taoussi aminei";

  char **result = ft_split(s, 'i');

  while (*result) {
    printf("%s\n", *result);
    result++;
  }
}
