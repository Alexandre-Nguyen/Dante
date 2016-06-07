/*
** display.c for display in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Apr  7 14:49:44 2016 alexandre
** Last update Thu Apr  7 15:05:56 2016 pierre1 brouard
*/

#include <unistd.h>
#include "dante.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	printab(char **str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != NULL)
    {
      while (str[i][j] != '\0')
	{
	  my_putchar(str[i][j]);
	  j = j + 1;
	}
      j = 0;
      i = i + 1;
    }
}
