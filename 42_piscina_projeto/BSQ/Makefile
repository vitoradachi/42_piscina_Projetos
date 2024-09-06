NAME = bsq
MAIN = src/main.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = src/parse_map.c src/print_map.c src/process_input.c src/solve_map.c src/validation.c

all: $(NAME)

$(NAME): $(MAIN)
	$(CC) $(CFLAGS) ${FUNCTIONS} -o $(NAME) $(MAIN)


run: $(NAME)
	./${NAME}


fclean:
	rm -f $(NAME)