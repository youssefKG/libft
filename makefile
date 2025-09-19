CC = gcc -Wall -Wextra -Werror

NAME = libft.a
AR = ar rcs

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strcmp.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim_sub.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ := $(SRCS:%.c=%.o)

$(NAME): $(OBJ) 
	$(AR) $@  $^ 

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME) clean

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -r $(NAME)

re: fclean all
