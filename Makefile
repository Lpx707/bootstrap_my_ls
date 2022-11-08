##
## EPITECH PROJECT, 2022
## bootstrap my_ls
## File description:
## Makefile
##

SRC =	src/checker.c	\
	src/info_file.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all