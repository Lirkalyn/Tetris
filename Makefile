##
## EPITECH PROJECT, 2019
## Day_10
## File description:
## makefile
##
.PHONY : clean fclean re

SRC	=	main.c \
		splitter.c \
		src/debug.c	\
		src/lib/my_put.c	\
		src/lib/my_other.c	\
		src/debg.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CPPFLAGS	=	-I ./include

$(NAME):	$(OBJ)
		gcc -g -o $(NAME) $(SRC) $(CPPFLAGS) -lm

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		$(RM) -f *~
		$(RM) -f *#
		$(RM) vgc*
		clear

re:	fclean $(NAME)
