#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/06 17:01:45 by vlehuger          #+#    #+#              #
#    Updated: 2014/02/26 16:23:28 by vlehuger         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
LD = ar
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = rcs

NAME = libft3d.a

SRCS = \
		vectors/ft_create_vector.c \
		vectors/ft_dot_product.c \
		vectors/ft_str_to_vect.c \
		vectors/ft_cross_product.c \
		ft_normalize.c \
		ft_vectors_operations.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	$(CC) -I includes/ -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
