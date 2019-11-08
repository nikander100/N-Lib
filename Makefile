# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/30 19:21:55 by nvan-der       #+#    #+#                 #
#    Updated: 2019/11/07 22:49:36 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_strlen.c ft_atoi.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c  ft_isascii.c ft_isprint.c ft_toupper.c ft_strncmp.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strchr.c ft_strnstr.c ft_split.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
ft_calloc.c ft_strdup.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_itoa.c \
ft_strmapi.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUSSRCS = BONUSSRCS
HDR = libft.h
OBJS = $(SRCS:.c=.o)
BONUSOBJS =
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(BONUSOBJS)
	ar rc $(NAME) $(BONUSOBJS)

%.o: %.c
	gcc -c $? -o $@ -I$(HDR) $(CFLAGS)

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
