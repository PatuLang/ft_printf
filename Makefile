# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 12:58:46 by plang             #+#    #+#              #
#    Updated: 2023/11/23 12:09:22 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

CC			= cc

CFLAGS 		= -Wall -Wextra -Werror

LIBFT_PATH	= ./libft

LIBFT		= $(LIBFT_PATH)/libft.a

SRCS 		= src/ft_format_specifier.c \
			src/ft_printf.c \
			src/ft_putchar.c \
			src/ft_puthex_base.c \
			src/ft_putint_base.c \
			src/ft_putpointer.c \
			src/ft_putstr.c \
			src/ft_putunsig.c

OBJS		= $(SRCS:.c=.o)

all: 			$(NAME)

$(NAME): 		$(LIBFT) $(OBJS)
	@cp 		$(LIBFT) $(NAME)
	@ar -cqs 	$(NAME) $(OBJS)
	

$(LIBFT):
	make -C		$(LIBFT_PATH)

clean: 
	rm -f 		$(OBJS)
	@make -C		$(LIBFT_PATH) fclean

fclean: clean
	rm -f 		$(NAME)

re: fclean 		$(NAME)

.PHONY: all clean fclean re libft
