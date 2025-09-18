#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s;

    s = ft_strtrim("   hello world   ", " ");
    printf("Test 1: |%s| (expected: |helloworld|)\n", s);
    free(s);

    s = ft_strtrim("---42---Network---", "-");
    printf("Test 2: |%s| (expected: |42Network|)\n", s);
    free(s);

    s = ft_strtrim("abcabcabc", "abc");
    printf("Test 3: |%s| (expected: ||)\n", s);
    free(s);

    s = ft_strtrim("libft", "xyz");
    printf("Test 4: |%s| (expected: |libft|)\n", s);
    free(s);

    s = ft_strtrim("", " ");
    printf("Test 5: |%s| (expected: ||)\n", s);
    free(s);

    return 0;
}

