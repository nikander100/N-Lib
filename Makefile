# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/30 19:21:55 by nvan-der       #+#    #+#                 #
#    Updated: 2019/11/05 18:19:42 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRC_MAP = srcs/
SRC_FILES = ft_strlen.c ft_atoi.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c  ft_isascii.c ft_isprint.c ft_toupper.c ft_strncmp.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strchr.c ft_strnstr.c ft_split.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_calloc.c \
ft_strdup.c
HDR = libft.h
CFLAGS = -Wall -Werror -Wextra 
SRC = $(addprefix $(SRC_MAP), $(SRC_FILES))
GCC = gcc -I $(HDR) -c $(SRC) $(CFLAGS)
BUILD_LIB = ar rc libft.a ft_*.o

$(NAME): all

all: 
	$(GCC)
	$(BUILD_LIB)
	
clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all