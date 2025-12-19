# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/11 13:55:07 by calvares          #+#    #+#              #
#    Updated: 2025/12/19 13:21:39 by calvares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR =		src
LIBFT_DIR = 	$(SRC_DIR)/libft
PRINTF_DIR = 	$(SRC_DIR)/ft_printf

LIBFT = 		$(LIBFT_DIR)/libft.a
PRINTF = 		$(PRINTF_DIR)/libftprintf.a

SRCS = \
	main.c \
	$(SRC_DIR)/commands.c \
	$(SRC_DIR)/parsing.c \
	$(SRC_DIR)/parsing_utils.c \
	$(SRC_DIR)/split.c \
	$(SRC_DIR)/stack_init.c \
	$(SRC_DIR)/stack_utils.c \
	$(SRC_DIR)/is_sorted.c

OBJS = 		$(SRCS:.c=.o)

CC = 		cc 
CFLAGS =	-Wall -Wextra -Werror -I. -I$(LIBFT_DIR) -I$(PRINTF_DIR)

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) -L $(LIBFT_DIR) -L$(PRINTF_DIR) -lft -lftprintf -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all