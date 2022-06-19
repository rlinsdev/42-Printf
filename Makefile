# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 03:22:12 by rlins             #+#    #+#              #
#    Updated: 2022/06/17 05:14:10 by rlins            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

GREEN = \033[0;32m
RED = \033[0;31m
BLUE = \033[0;34m
RESET = \033[0m

CC = gcc -c 

FLAGS = -Wall -Wextra -Werror

AR = ar -rcs

SRCS = ft_free.c ft_itoa_base.c ft_print_char.c ft_print_dec_int.c \
	ft_print_hexa.c ft_print_pointer.c ft_print_string.c ft_printf.c \
	ft_putchar.c ft_putstr.c ft_strlen.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@echo "$(BLUE)(just) a minute ⌛...$(RESET)"
	$(CC) $(FLAGS) $(SRCS)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\n$(NAME): $(GREEN)$(NAME) was created ✓$(RESET)"
	@echo
	

clean:
	@echo "\n$(NAME): $(RED)object (*.o) files were deleted ✗$(RESET)"
	/bin/rm -f $(OBJ)
	@echo

fclean: clean
	@echo "$(NAME): $(RED)$(NAME) was deleted ✗$(RESET)"
	/bin/rm -rf $(NAME)
	@echo

re: fclean all

.PHONY: all clean fclean re
