#include <stdio.h>
#include <stdlib.h>

// put your ft_itoa prototype here
char *ft_itoa(int n);

int main(void)
{
    int tests[] = {0, 1, -1, 42, -42, 12345, -12345, 2147483647, -2147483648};
    int size = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < size; i++)
    {
        char *str = ft_itoa(tests[i]);
        if (str)
        {
            printf("ft_itoa(%d) = \"%s\"\n", tests[i], str);
            free(str); // don’t forget to free the result
        }
        else
        {
            printf("ft_itoa(%d) = NULL (allocation failed)\n", tests[i]);
        }
    }
    return 0;
}

