CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = srcs/
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
HEADERS = includes
NAME = libft.a
RM = rm -f
OBJS = ${addprefix ${SOURCE},${SRCS:.c=.o}}

.c.o:
	${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS}

all:		${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
