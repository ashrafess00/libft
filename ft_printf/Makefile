CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putnbru.c
OBJS=${SRCS:.c=.o}
NAME=libftprintf.a
AR=ar -rc


all:${NAME}

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $?

${NAME}:${OBJS}
	$(AR) ${NAME} $^

clean:
	rm -rf ${OBJS}

fclean:
	rm -rf ${OBJS} ${NAME}

re: clean all