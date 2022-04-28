NAME = rush-02

SOURCE = *.c

FLAGS = -Wall -Wextra -Werror

CLEAN = ${SRC:.o}

all: rush-02

rush-02: ${CLEAN}
	gcc -o ${NAME} ${SOURCE} ${FLAGS}

fclean:
	rm -f ${NAME}

clean:
	rm -f ${CLEAN}