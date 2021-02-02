##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 105torus
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	mylib

CFLAGS	=	-I./include/ -g

CFLAGS +=	-Wall -Wextra -Wshadow -Wuninitialized -Wformat-security

LDFLAGS =	-L./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) ./lib/my/*~
	$(RM) *~
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my/ clean

fclean:	clean
	$(RM) $(NAME)
	$(RM) ./lib/libmy.a
	$(MAKE) -C ./lib/my/ fclean

re:	fclean all

lib/libmy.a:
	$(MAKE) -C ./lib/my/

.Phony: all clean fclean re


