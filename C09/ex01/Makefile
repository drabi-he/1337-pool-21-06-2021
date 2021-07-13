
CC = gcc
FLAGS =-Wall -Werror -Wextra
ARC= ar cr
OBJ =srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_swap.o srcs/ft_strlen.o

all: libft.a

libft.a:$(OBJ)
	$(ARC) $@ $^

%.o: %.c 
	$(CC) $(FLAGS) -c -I./includes $< -o $@

clean:
	rm srcs/*.o

fclean: clean
	rm libft.a

re: fclean all