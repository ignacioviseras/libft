# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 18:28:35 by igvisera          #+#    #+#              #
#    Updated: 2023/09/27 18:34:14 by igvisera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

OBJS	=	${SRCS:.c=.o}

FLAGS		= -Wall -Wextra -Werror

SRCS	=	ft_strlen.c \
			ft_isdigit.c \
			ft_memset.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_toupper.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_atoi.c \
			ft_strncmp.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_strchr.c \
			ft_memmove.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memcmp.c

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
