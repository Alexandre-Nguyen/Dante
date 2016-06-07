/*
** showlab.c for  in /home/brouar_a/rendu/intelartificielle/dante/resolution/profondeur
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Fri May 13 15:54:59 2016 pierre1 brouard
** Last update Sun May 29 15:39:06 2016 alexandre
*/

#include "dante.h"
#include <unistd.h>

int	check_number_of_line(const int fd)
{
  char  c[1];
  int   i;

  i = 0;
  while (1)
    {
      if (read(fd, c, 1) != 1)
	return (i);
      if (c[0] == '\n')
	i++;
    }
  return (0);
}

void	showlab(char **lab)
{
  int	i;

  i = 0;
  while (lab[i] != NULL)
    {
      my_putstr(lab[i]);
      my_putstr("\n");
      i++;
    }
}
