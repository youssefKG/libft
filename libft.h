#ifndef LIBFT_HEADER
typedef unsigned int size_t;
int ft_isalpha(char c); // done
int ft_isdigit(int n); // done
int ft_isalnum(int c); // done
int ft_isascii(int c); // done
int ft_isprint(int c); // done
int ft_strlen(char *str); // done
void *ft_memset(void *s, int c, size_t n); // done
void *bzero(void *s, size_t n); // done
void *ft_memcpy(void *dest, const void *src, size_t n); // done
void *memmove(void *dest, const void *src, size_t n); // done
size_t ft_strlcpy(char *dest, const char *src, size_t dsize); // not yet
size_t ft_strlcat(char *dest, const char *src, size_t dsize); // not yet
int ft_toupper(int c); // done
int ft_tolower(int c); // done
char *strchr(const char *str, char c); // done
int ft_atoi(const char *str); // done


#endif // !LIBFT_HEADER
