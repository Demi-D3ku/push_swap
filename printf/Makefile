NAME = libftprintf.a

SRC = ft_printf.c \
      ft_check.c \
      ft_putchar.c \
      ft_putnbr.c \
      ft_unputnbr.c \
      ft_puthexbig.c \
      ft_puthexsmall.c \
      ft_putstr.c \
      ft_putptr.c

OBJS = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Werror -Wall -Wextra

RM = rm -rf

AR = ar crs

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
