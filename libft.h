#ifndef LIBFT_HEADER

#include <unistd.h>

typedef struct s_list {
  void *content;
  struct s_list *next;
} t_list;

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
char *ft_strchr(const char *str, int c); // done
char *ft_strrchr(const char *str, int c); // done
int ft_strcmp(const char *s1, const char *s2); // done
int ft_strncmp(const char *s1, const char *s2, size_t n); // done
void *ft_memchr(const void *s1, const int c, size_t n); // done
int ft_memcmp(const void *s1, const void *s2, size_t n); // done
int ft_atoi(const char *str); // done
char *ft_strdup(const char *str); // done
void *ft_calloc(size_t nmemb, size_t size); // done
char *ft_substr(const char *s, unsigned int start, size_t len); // done
char *ft_strjoin(const char *s1, const char *s2); // done
char *ft_strtrim(const char *s1, const char *set); // done
char *ft_strtrim_sub(const char *s1, const char *set); // done 
char *ft_strremove(const char *s1, const char *set); // done
char **ft_split(const char *s, int c); // done
char *ft_itoa(int n); // done
char *ft_strmapi(const char *s, char (*f)(unsigned int, char)); // done
void ft_striteri(char *s, void (*f)(unsigned int, char *)); // done
void ft_putchar_fd(char c, int fd); // done
void ft_putstr_fd(char *s, int fd); // done
void ft_putendl_fd(char *s, int fd); // done
void ft_putnbr_fd(int n, int fd); // done
t_list *ft_lstnew(void *content); // done
void ft_lstadd_front(t_list **lst, t_list *new); // done
int ft_lstsize(t_list *lst); // done
t_list *ft_lstlast(t_list *lst); // done
void ft_lstadd_back(t_list **lst, t_list *new); // done
void ft_lstdelone(t_list *lst, void (*del)(void *)); // done
void ft_lstclear(t_list **lst, void (*del)(void *)); // done
void ft_lstiter(t_list *lst, void (*f)(void*)); // done
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif // !LIBFT_HEADER
