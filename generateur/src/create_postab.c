/*
** create_postab.c for create_postab in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu May  5 23:41:48 2016 alexandre
** Last update Tue Jun  7 16:28:49 2016 alexandre
*/

#include "fonction.h"

int	**set_postab(t_data *data, int  **postab)
{
  int   i;
  int   j;
  int   line;

  line = data->height * data->width;
  i = 0;
  j = 0;
  while (i != line)
    {
      while (j != 2)
	{
	  postab[i][j] = 0;
	  j = j + 1;
	}
      j = 0;
      i = i + 1;
    }
  return (postab);
}

int	**create_postab(t_data *data, int **postab)
{
  int   i;
  int   line;

  line = data->height * data->width;
  i = 0;
  if ((postab = malloc(sizeof(int *) * (line + 1))) == NULL)
    return (NULL);
  postab[line] = NULL;
  while (i != line)
    {
      if ((postab[i] = malloc(sizeof(int) * 2)) == NULL)
	return (NULL);
      i = i + 1;
    }
  postab = set_postab(data, postab);
  return (postab);
}
