# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 20:43:14 by apercebo          #+#    #+#              #
#    Updated: 2022/04/12 14:10:16 by apercebo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= gcc
RM		= rm -f
SOURCES = push_swap.c \
		  swaptoolextra.c \
		  swaptoolrrr.c \
		  swaptools.c \
		  psalgotwo.c \
		  main_algo.c
OBJS = $(SOURCES:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

all:		printf ${NAME}

%.o:	%.c Makefile push_swap.h ./ft_printf/libftprintf.a
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} push_swap.h Makefile
			${CC} ${CFLAGS} ${OBJS} ft_printf/libftprintf.a -o ${NAME}

printf:
		@make -C ./ft_printf

clean:
			${RM} ${OBJS}
			make clean -C ./ft_printf

fclean:		clean
			make fclean -C ./ft_printf
			${RM} push_swap

re:			fclean all

.PHONY:		all clean fclean re