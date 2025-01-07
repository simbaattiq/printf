# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 16:28:44 by mel-atti          #+#    #+#              #
#    Updated: 2023/11/26 16:47:11 by mel-atti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror 

SRC =	ft_printf.c \
		all_formats_handel.c \
		big_hex_handel.c \
		char_handel.c \
		dec_int_handel.c \
		ft_itoa_unsigned.c \
		ft_itoa_signed.c \
		num_len.c \
		pointer_handel.c \
		small_hex_handel.c \
		string_handel.c \
		ft_str_len.c \
		unsigned_handel.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY:	all clean fclean re