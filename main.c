#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char increment_char(unsigned int i, char c) {
  if (i != 0)
    return ++c;
  return c;
}

int main() {
  ft_putnbr_fd(0, 1);
}
