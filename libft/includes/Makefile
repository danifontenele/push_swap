# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 20:19:10 by calvares          #+#    #+#              #
#    Updated: 2025/11/05 00:17:09 by calvares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PART1 = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
PART2 = 	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = 	ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
FT_PRINTF = 		ft_putaddress.c ft_putchar.c ft_puthexadecimal_uppercase.c \
			ft_puthexadecimal_lowercase.c ft_putnbr.c ft_putstr.c ft_putunbr.c\
			ft_printf.c
SRC = $(PART1) $(PART2)
OBJS =	$(SRC:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)
PRINTF_OBJS = $(FT_PRINTF:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_BONUS) $(PRINTF_OBJS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(PRINTF_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(PRINTF_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
