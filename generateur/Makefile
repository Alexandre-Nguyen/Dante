##
## Makefile for dante in /home/brouar_a/rendu/intelartificielle/dante/generateur/imparfait
##
## Made by pierre1 brouard
## Login   <brouar_a@epitech.net>
##
## Started on  Sun May 22 19:04:00 2016 pierre1 brouard
## Last update Tue Jun  7 16:16:52 2016 alexandre
##

NAME	=	../maze

SRC	=	src/main.c		\
		src/standar.c		\
		src/display.c		\
		src/create_lab.c	\
		src/create_postab.c	\
		src/set_imparfait.c	\
		src/set_lab.c		\
		src/break_walls.c	\
		src/free_tabs.c		\
		src/my_strcmp.c		\
		src/check_nb.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic

CFLAGS	+=	-I./include

CC	=	gcc

RM	=	rm -rf

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all	:	$(NAME)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all
