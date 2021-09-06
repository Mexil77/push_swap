# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 20:26:23 by emgarcia          #+#    #+#              #
#    Updated: 2021/09/02 20:47:09 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_push_swap.c
LIBFT	= libft/libft.a
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	cd libft ; make
	cp ${LIBFT} ${NAME}
	ar -crs ${NAME} ${OBJS} ${LIBFT}

clean:
	cd libft ; make clean

fclean:
	cd libft ; make fclean

re: fclean all