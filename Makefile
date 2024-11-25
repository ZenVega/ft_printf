# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 10:42:30 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/19 10:42:52 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
../ft_printf/ft_putchar_fd.c\
../ft_printf/ft_putstr_fd.c\
../ft_printf/ft_putnbr_fd.c\
../ft_printf/ft_putnbr_base.c\
../ft_printf/ft_printnbr.c\
../ft_printf/ft_printprcnt.c\
../ft_printf/ft_strchr.c\
../ft_printf/ft_strlen.c\
../ft_printf/ft_printf.c

OFILES = $(CFILES:.c=.o)

DEPS = ../ft_printf/libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES) 
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES) $(OFILES_BONUS)

fclean:	clean 
	rm -f $(NAME)

re: fclean all

test: unity_test.c $(NAME)
	cc $(CFLAGS) -c unity_test.c -o testfile.o
	cc $(CFLAGS) -o testfile testfile.o ../Unity/src/unity.c -L. -lft 
	./testfile

.PHONY: all clean fclean re
