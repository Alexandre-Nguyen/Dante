## Makefile for  in /home/brouar_a/rendu/intelartificielle/dante/resolution/profondeur
##
## Made by pierre1 brouard
## Login   <brouar_a@epitech.net>
##
## Started on  Wed May 11 17:38:56 2016 pierre1 brouard
## Last update Tue Jun  7 16:13:37 2016 alexandre
##

NAME	=	../solver

SRC	=	src/list.c 		\
		src/profondeur.c 	\
		src/display.c 		\
		src/getlab.c 		\
		src/get_next_line.c 	\
		src/showlab.c 		\
		src/standar.c 		\
		src/base_resolv.c  	\
		src/standar2.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic -Werror

CFLAGS	+=	-Iinclude

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
