# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 12:45:38 by joaoleote         #+#    #+#              #
#    Updated: 2024/11/29 17:54:58 by joaoleote        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = ./Libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = 	src/pipex.c \
		src/utils.c \
		src/errors.c \

OBJS = $(SRCS:.c=.o)
RM = rm -f $(OBJS)
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@echo " [...] | COMPILING..."
	@make -s -C $(LIBFT_PATH)
	@echo "[ OK ] | READY!"

clean:
	$(RM)
fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFT_PATH)
re: fclean all

.PHONY: all clean fclean re
