/*
** base_resolv.c for base_resolv in /home/alexandre/rendu/dante/profondeur/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Sat May 28 16:00:02 2016 alexandre
** Last update Sun May 29 15:21:56 2016 alexandre
*/

#include "list.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	count_line(char **map)
{
  int   i;

  i = 0;
  while (map[i] != NULL)
    i = i + 1;
  return (i);
}

int	check_end(char **map, int i, int j)
{
  if (j == (my_strlen(map[0]) - 1) && i == (count_line(map) - 1))
    return (1);
  else
    return (0);
}

void	finission(char **map)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (map[i] != NULL)
    {
      while (map[i][j] != '\0')
	{
	  if (map[i][j] == ' ' || map[i][j] == '-')
	    map[i][j] = '*';
	  j = j + 1;
	}
      j = 0;
      i = i + 1;
    }
}
