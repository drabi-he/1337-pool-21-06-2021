
CC = gcc
FLAGS =-Wall -Werror -Wextra
ARC= ar cr
OBJ =$(patsubst srcs/%.c,srcs/%.o,$(wildcard srcs/*.c))

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