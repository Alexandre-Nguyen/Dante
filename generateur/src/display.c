/*
** display.c for display in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Apr  7 14:49:44 2016 alexandre
** Last update Sun May 29 15:50:48 2016 alexandre
*/

#include <unistd.h>
#include "fonction.h"

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

void	my_put_nbr(int nb)
{
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + 48);
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
      my_putchar('\n');
      j = 0;
      i = i + 1;
    }
}

void	print_int_tab(int **tab, int height, int width)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i != ((height * width) - 1))
    {
      while (j != 2)
	{
	  my_put_nbr(tab[i][j]);
	  j = j + 1;
	}
      my_putchar('\n');
      j = 0;
      i = i + 1;
    }
}
