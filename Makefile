# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 23:00:35 by ebensalt          #+#    #+#              #
#    Updated: 2022/06/27 01:06:55 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
C		= push_swap.c \
		  push_swap_utils.c \
		  ft_atoi.c \
		  push_swap_utils0.c \
		  sa.c \
		  pa.c \
		  pb.c \
		  ra.c \
		  rb.c \
		  rra.c \
		  rrb.c \
		  ft_algo.c \
		  check_sort.c \
		  ft_my_swap.c \
		  check_sort_0.c \
		  ft_algo_0.c \
		  ft_algo_1.c \
		  check_sort_1.c \
		  handling.c \
		  ft_split_0.c \
		  ft_strlen.c \
		  ft_strjoin.c \
		  ft_split.c
O		= $(C:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
all		: $(NAME)
$(NAME)	: $(O)
	$(CC) $(CFLAGS) $(O) -o $(NAME)
clean	:
	rm -rf *.o
fclean	: clean
	rm -rf $(NAME)
re		: fclean all