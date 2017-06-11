# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnetshik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 12:03:30 by dnetshik          #+#    #+#              #
#    Updated: 2017/05/31 12:54:26 by dnetshik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = includes
SRC = *ft_strcpy.c *ft_strncpy.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_strdup.c ft_strstr.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c
OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I$(HEADER)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

