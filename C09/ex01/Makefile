# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:09:21 by hdrabi            #+#    #+#              #
#    Updated: 2021/07/14 10:18:58 by hdrabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
NAME = libft.a
OBJS = $(addprefix srcs/,${SRCS:.c=.o})
FLAG = gcc -Wall -Werror -Wextra
.c.o :
	${FLAG} -c -I./includes $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar cr $@ $^

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re