CC = gcc -Wall -Wextra -Werror

NAME = exec

SRCS = ft_strlcat.c ft_strlen.c ft_strcmp.c main.c ft_strncmp.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c

OBJ := $(SRCS:%.c=%.o)

$(NAME): $(OBJ) 
	$(CC) $^ -o $@ 

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -r $(NAME)

re: fclean all
