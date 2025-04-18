NAME = ft_display_file
SRCS = ft_display_file.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} ${SRCS}

all: ${NAME}

clean: 
	@${RM} *.o

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
