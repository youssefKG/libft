#ifndef LIBFT_HEADER

#include <unistd.h>

int ft_isalpha(char c); // done
int ft_isdigit(int n); // done
int ft_isalnum(int c); // done
int ft_isascii(int c); // done
int ft_isprint(int c); // done
size_t ft_strlen(const char *str); // done
void *ft_memset(void *s, int c, size_t n); // done
void ft_bzero(void *s, size_t n); // done
void *ft_memcpy(void *dest, const void *src, size_t n); // done
void *ft_memmove(void *dest, const void *src, size_t n); // done
size_t ft_strlcpy(char *dest, const char *src, size_t dsize); // done
size_t ft_strlcat(char *dest, const char *src, size_t dsize);
int ft_toupper(int c); // done
int ft_tolower(int c); // done
char *ft_strchr(const char *str, char c); // done
int ft_strcmp(const char *s1, const char *s2); // done
int ft_strncmp(const char *s1, const char *s2, size_t n); // done
void *ft_memchr(const void *s1, const int c, size_t n); // done
int ft_memcmp(const void *s1, const void *s2, size_t n); // done
int ft_atoi(const char *str); // done
char *ft_strdup(const char *str); // done
void *ft_calloc(size_t nmemb, size_t size); // done
char *ft_substr(const char *s, unsigned int start, size_t len); // done
char *ft_strjoin(const char *s1, const char *s2); // done

#endif // !LIBFT_HEADER
