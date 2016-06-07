##
## Makefile for  in /home/brouar_a/rendu/intelartificielle/dante
## 
## Made by pierre1 brouard
## Login   <brouar_a@epitech.net>
## 
## Started on  Sun May 22 23:25:02 2016 pierre1 brouard
## Last update Tue Jun  7 16:15:50 2016 alexandre
##

NAME	=	dante

RM	=	rm -f

$(NAME)	:
	make -C resolution
	make -C generateur

all	:	$(NAME)

clean	:
	make -C resolution clean
	make -C generateur clean

fclean	:
	make -C resolution fclean
	make -C generateur fclean

re	:
	make -C resolution re
	make -C generateur re
