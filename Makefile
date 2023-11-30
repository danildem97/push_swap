# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 20:17:22 by ddemydov          #+#    #+#              #
#    Updated: 2023/07/29 21:53:27 by ddemydov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB_FT = libft
LIB = libft.a
PRINT_F = ft_printf
PRINT = libftprintf.a 
SRCS = do_move.c error_utils.c ft_errors.c multi_func.c \
	silent_func.c p_func.c r_func.c s_func.c push_swap.c \
			search_utils.c sort_utils.c sort.c utils.c input.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS) $(LIB_FT)/$(LIB) $(PRINT_F)/$(PRINT)
	$(CC) $(CFLAGS) $(LIB_FT)/$(LIB) $(PRINT_F)/$(PRINT) $(OBJS) -o $(NAME)

$(LIB_FT)/$(LIB):
	@make -C $(LIB_FT)

$(PRINT_F)/$(PRINT):
	@make -C $(PRINT_F)
 
all: $(NAME)

clean:
	rm -rf $(OBJS) checker.o
	@make -C $(LIB_FT) clean
	@make -C $(PRINT_F) clean

fclean: clean
	rm -rf $(NAME) checker
	@make -C $(LIB_FT) fclean
	@make -C $(PRINT_F) fclean
	
re: fclean all

.PHONY: all clean fclean re