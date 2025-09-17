#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

void test_strjoin(const char *s1, const char *s2, const char *expected)
{
    char *result = ft_strjoin(s1, s2);

    if (!result && !expected)
        printf("✅ OK | s1: %s, s2: %s | got NULL as expected\n",
               s1 ? s1 : "NULL", s2 ? s2 : "NULL");
    else if (result && expected && strcmp(result, expected) == 0)
        printf("✅ OK | s1: %s, s2: %s | got: \"%s\"\n",
               s1 ? s1 : "NULL", s2 ? s2 : "NULL", result);
    else
        printf("❌ FAIL | s1: %s, s2: %s | expected: \"%s\", got: \"%s\"\n",
               s1 ? s1 : "NULL", s2 ? s2 : "NULL",
               expected ? expected : "NULL", result ? result : "NULL");

    free(result);
}

int main(void)
{
    // Basic cases
    test_strjoin("Hello", "World", "HelloWorld");
    test_strjoin("42", " Network", "42 Network");

    // One empty string
    test_strjoin("", "World", "World");
    test_strjoin("Hello", "", "Hello");

    // Both empty
    test_strjoin("", "", "");

    // Single-character strings
    test_strjoin("A", "B", "AB");

    // NULL input (depends on your ft_strjoin, usually should return NULL)
    test_strjoin(NULL, "World", NULL);
    test_strjoin("Hello", NULL, NULL);
    test_strjoin(NULL, NULL, NULL);

    return 0;
}

