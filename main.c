#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void) {
    char buffer[10] = {'a', '\0', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    char search = 'b';

    // Using your ft_memchr
    char *res = ft_memchr(buffer, search, 10);
    char *res1 = memchr(buffer, search, 10);

    if (res)
        printf("ft_memchr found '%c' at position: %ld\n", search, res - buffer);
    else
        printf("ft_memchr did NOT find '%c'\n", search);

    if (res1)
        printf("ft_memchr found '%c' at position: %ld\n", search, res1 - buffer);
    else
        printf("ft_memchr did NOT find '%c'\n", search);

    return 0;
}
