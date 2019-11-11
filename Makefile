# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/30 19:21:55 by nvan-der       #+#    #+#                 #
#    Updated: 2019/11/11 18:34:51 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_strlen.c ft_atoi.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_strncmp.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strchr.c ft_strnstr.c ft_split.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
ft_calloc.c ft_strdup.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_itoa.c \
ft_strmapi.c
BONUS_SRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
HDR = libft.h

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
GCC = gcc -c $(SRCS) $(CFLAGS)
GCC_BONUS = gcc -c $(SRCS) $(BONUS_SRCS) $(CFLAGS)
ARRC = ar rc libft.a ft_*.o

$(NAME): all

all:
	$(GCC)
	$(ARRC)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	$(GCC_BONUS)
	$(ARRC)
