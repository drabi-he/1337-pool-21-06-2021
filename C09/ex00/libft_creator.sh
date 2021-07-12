#!/bin/sh
gcc -Wall -Werror -Wextra -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar cr libft.a ft_putstr.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o