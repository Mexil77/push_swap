# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 20:26:23 by emgarcia          #+#    #+#              #
#    Updated: 2021/09/10 19:54:24 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_short_sort.c ft_radixsort.c ft_operationsa.c ft_operationsb.c ft_long_atoi.c ft_stackaux.c main.c ft_push_swap.c ft_splitaux.c
LIBFT	= libft/libft.a
PUSH_S	= push_swap.a
OBJS	= ${SRCS:.c=.o}
NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${PUSH_S}
	${CC} ${CFLAGS} ${PUSH_S} -o ${NAME}

$(PUSH_S): ${OBJS}
	cd libft ; make
	cp ${LIBFT} ${PUSH_S}
	ar -crs ${PUSH_S} ${OBJS} ${LIBFT}

clean:
	cd libft ; make fclean
	${RM} ${OBJS} ${PUSH_S}

fclean: clean
	cd libft ; make fclean
	${RM} ${NAME}

re: fclean all