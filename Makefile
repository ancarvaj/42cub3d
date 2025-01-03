NAME := cub3D

CFLAGS := -Wall -Wextra -Werror

#CFLAGS +:= -fsanitize=thread -g3

HEADER := -Iincludes

LIB := libft/libft.a minilibx/libmlx_Linux.a

SRCS = src/main.c\
	   src/libft_utils.c src/map_error.c\
	   src/gnl/get_next_line.c src/gnl/get_next_line_utils.c\

OBJS := ${SRCS:c=o}

.PHONY: all
all: ${NAME}

${NAME} : $(OBJS)
	cd minilibx && make
	cd libft && make
	$(CC) $^ -o $@ ${LIB}

.PHONY: clean
clean:
	cd libft && make $@
	$(RM) $(OBJS)

.PHONY: fclean
fclean:
	cd libft && make $@
	cd minilibx && make clean
	$(RM) $(OBJS) $(NAME)

.PHONY: re
re: fclean all

%.o: %.c
	${CC} ${CFLAGS} ${HEADER} -c -o $@ $< ${HEADER}
