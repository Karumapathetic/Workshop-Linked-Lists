##
## EPITECH PROJECT, 2024
## Workshop-LinkedLists
## File description:
## Makefile
##

SRC	=	create_node.c \
		delete_list.c \
		delete_node.c \
		add_node_to_end_of_list.c \
		add_node_to_start_of_list.c

SRC_MAIN	=	main.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

OBJ_MAIN = $(addprefix src/, $(SRC_MAIN:.c=.o))

OBJ_VALGRIND = src/valgrind.o

NAME = LinkedList

CFLAGS = -Wall -Wextra -I./include

$(NAME): $(OBJ) $(OBJ_MAIN)
	gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) src/print_list.o $(CFLAGS)

all: $(NAME)

valgrind: $(OBJ) $(OBJ_VALGRIND)
	gcc -o valgrind $(OBJ) $(OBJ_VALGRIND) src/print_list.o $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_MAIN)

fclean: clean
	rm -f $(NAME)
	rm -f valgrind

re: fclean all

.PHONY: all clean fclean re
