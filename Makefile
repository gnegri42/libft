# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnegri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:53:26 by gnegri            #+#    #+#              #
#    Updated: 2017/11/08 10:53:28 by gnegri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

FILES =		tests.c\
			ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strstr.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putendl.c\
			ft_putnbr.c\

SRCS =		$(FILES)

OBJS =		$(FILES:.c=.o)

CC =		gcc

FLAGS =		-Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

easy : all clean
