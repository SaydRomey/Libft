# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 16:55:05 by cdumais           #+#    #+#              #
#    Updated: 2023/02/27 19:27:12 by cdumais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

SRC =       ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strncmp.c\
			ft_strdup.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_split.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

BONUS =     ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c

OBJS    = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

REMOVE  = rm -f


all: $(NAME)

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
		$(LIBC) $(NAME) $(OBJS) $(BONUS_OBJS)
clean:
		$(REMOVE) $(OBJS) $(BONUS_OBJS)

fclean: clean
		$(REMOVE) $(NAME)

vclean: fclean
		$(REMOVE) $(filter-out Makefile libft.h, $(wildcard *[!.c]))

re: fclean all

rebonus: fclean bonus

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all bonus clean fclean vclean re rebonus