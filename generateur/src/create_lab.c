/*
** create_lab.c for  in /home/brouar_a/rendu/intelartificielle/dante/src
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Thu Apr  7 14:52:27 2016 pierre1 brouard
** Last update Sun May 22 19:15:44 2016 pierre1 brouard
*/

#include <stdlib.h>
#include "fonction.h"

char	**set_base_lab(char **test, int width, int height)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (i < height)
    {
      while (j < width)
	{
	  test[i][j] = 'X';
	  j = j + 1;
	}
      j = 0;
      i = i + 1;
    }
  return (test);
}

char	**create_lab(char **map, int width, int height)
{
  int	i;

  i = 0;
  if ((map = malloc((height + 1) * sizeof(char *))) == NULL)
    return (NULL);
  map[height] = NULL;
  while (i < height)
    {
      if ((map[i] = malloc(sizeof(char) * (width + 1))) == NULL)
	return (NULL);
      map[i][width] = '\0';
      i++;
    }
  map = set_base_lab(map, width, height);
  return (map);
}
