# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 17:20:15 by ilopez-r          #+#    #+#              #
#    Updated: 2023/05/17 11:52:59 by ilopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

FILES = ft_isalpha.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strncmp.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putsrt_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c\

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re : all

.PHONY : all re fclean clean