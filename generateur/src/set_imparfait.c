/*
** set_imparfait.c for imparfait in /home/alexandre/rendu/dante/imparfait/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon May  9 20:38:13 2016 alexandre
** Last update Sun May 22 19:28:30 2016 pierre1 brouard
*/

#include <time.h>
#include "fonction.h"

void	set_imparfait(t_data *data)
{
  int	i;
  int	j;
  int	a;

  i = 0;
  j = 0;
  srand(time(NULL));
  while (data->map[i] != NULL)
    {
      while (data->map[i][j] != '\0')
	{
	  a = rand() % 2;
	  if (data->map[i][j] == 'X')
	    {
	      if (a == 0)
		data->map[i][j] = '*';
	      else if (a == 1)
		data->map[i][j] = 'X';
	    }
	  j = j + 1;
	}
      j = 0;
      i = i + 1;
    }
}
