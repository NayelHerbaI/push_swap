# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnayel <hnayel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 20:28:19 by naherbal          #+#    #+#              #
#    Updated: 2026/01/29 17:57:13 by hnayel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	src/main.c						\
		src/setup.c						\
		src/ft_atoi.c					\
		src/functions.c					\
		src/sec_functions.c				\
		src/swap.c						\
		src/push.c						\
		src/rotate.c					\
		src/reverse_rotate.c			\
		src/create_numbers_from_zero.c	\
		src/error_check.c				\
		src/is_list_sorted.c			\
		src/sort_numbers.c				\
		src/sort_three_numbers.c		\
		src/sort_five_numbers.c			\
		src/bitwise_alg.c				\
		src/ft_split.c					\
		src/second_sort_five_numbers.c	\
		src/pick_sort.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap	

CFLAGS	=	-Wall -Wextra -Werror

HEADERS	=	-I includes

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			cc $(CFLAGS) $(HEADERS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
