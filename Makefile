# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 19:05:11 by aessaoud          #+#    #+#              #
#    Updated: 2022/12/15 12:15:30 by aessaoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c \
ft_atoi.c \
ft_bzero.c \
ft_tolower.c \
ft_toupper.c \
ft_strnstr.c \
ft_calloc.c \
ft_memchr.c \
ft_isalnum.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_strncmp.c \
ft_isalpha.c \
ft_strchr.c \
ft_isascii.c \
ft_strdup.c \
ft_isdigit.c \
ft_isprint.c \
ft_strrchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_substr.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strjoin.c \
ft_striteri.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_printf.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr.c \
ft_putnbru.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \
get_next_line.c \
get_next_line_utils.c \
get_next_line_bonus.c \
get_next_line_utils_bonus.c

OBJS=${SRCS:.c=.o}
NAME=libft.a
NAMEBONUS=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all:$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	ar -rc $@ $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean:
	$(RM) $(NAME) $(OBJS) $(OBJSBONUS)

re: fclean all