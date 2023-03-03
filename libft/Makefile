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

LIBC = ar -rcs

REMOVE  = rm -f

GREEN = \033[32m
STDCLR = \033[0m

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

OBJS    	= $(SRC:.c=.o)

BONUS =     ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c

BONUS_OBJS 	= $(BONUS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			$(LIBC) $(NAME) $@

all: 		$(NAME)
			@echo "$(GREEN)Object files compiled$(STDCLR)"

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

bonus: 		$(OBJS) $(BONUS_OBJS)
			@echo "$(GREEN)All object files compiled$(STDCLR)"

clean:
			$(eval REMOVED := $(wildcard $(OBJS) $(BONUS_OBJS)))
			@if [ -n "$(REMOVED)" ]; then \
				$(REMOVE) $(REMOVED); \
				echo "$(GREEN)Removed object files: $(STDCLR) $(REMOVED)"; \
			else \
				echo "$(GREEN)No object files to clean$(STDCLR)"; \
			fi;

fclean: 	clean
			$(eval NONAME := $(wildcard $(NAME)))
			@if [ -n "$(NONAME)" ]; then \
				$(REMOVE) $(NONAME); \
				echo "$(GREEN)Removed archive library: $(STDCLR) $(NONAME)"; \
			else \
				echo "$(GREEN)Archive library already removed$(STDCLR)"; \
			fi;

vclean: 	fclean
			$(eval NOMISC :=$(filter-out Makefile libft.h, $(wildcard *[!.c])))
			@if [ -n "$(NOMISC)" ]; then \
				$(REMOVE) $(NOMISC); \
				echo "$(GREEN)Cleaned up: $(STDCLR) $(NOMISC)"; \
			else \
				echo "$(GREEN)All cleaned up !$(STDCLR)"; \
			fi;

re: 		fclean all

rebonus:	fclean bonus

norm:
			norminette -R CheckForbiddenSourceHeader *.c
			norminette -R CheckDefine *.h

.PHONY: all bonus clean fclean vclean re rebonus

fclean: 	clean
			$(eval NONAME := $(wildcard $(NAME)))
			@if [ -n "$(NONAME)" ]; then \
				$(REMOVE) $(NONAME); \
				echo "$(GREEN)Removed archive library: $(STDCLR) $(NONAME)"; \
			else \
				echo "$(GREEN)Archive library already removed$(STDCLR)"; \
			fi;

vclean: 	fclean
			$(eval NOMISC :=$(filter-out Makefile libft.h, $(wildcard *[!.c])))
			@if [ -n "$(NOMISC)" ]; then \
				$(REMOVE) $(NOMISC); \
				echo "$(GREEN)Cleaned up: $(STDCLR) $(NOMISC)"; \
			else \
				echo "$(GREEN)All cleaned up !$(STDCLR)"; \
			fi;

re: 		fclean all

rebonus:	fclean bonus

norm:
			norminette -R CheckForbiddenSourceHeader *.c
			norminette -R CheckDefine *.h

.PHONY: all bonus clean fclean vclean re rebonus
