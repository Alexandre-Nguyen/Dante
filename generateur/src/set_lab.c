/*
** set_lab.c for set_lab in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu May  5 23:09:03 2016 alexandre
** Last update Tue Jun  7 16:27:38 2016 alexandre
*/

#include <time.h>
#include "fonction.h"

int	check_case(t_data *data, int i, int j)
{
  if (i < 0 || j < 0)
    return (0);
  else if (i >= data->height || j >= data->width)
    return (0);
  else if (data->map[i][j] == 'X')
    return (1);
  else
    return (0);
}

void	reset_postab(t_data *data)
{
  while (data->postab[data->y][0] == -1)
    data->y = data->y - 1;
  data->i = data->postab[data->y][0];
  data->j = data->postab[data->y][1];
  data->postab[data->y][0] = -1;
  data->postab[data->y][1] = -1;
}

void	set_var(t_data *data)
{
  data->i = 0;
  data->j = 0;
  data->y = 1;
  data->x = 0;
}

int	set_lab(t_data *data)
{
  int	a;
  int	i;

  i = 0;
  a = 1;
  srand(time(NULL));
  if ((data->postab = create_postab(data, data->postab)) == NULL)
    return (1);
  data->map[0][0] = '*';
  set_var(data);
  while (data->postab[0][0] == 0)
    {
      a = rand() % (5 - 1) + 1;
      if ((check_break(data)) == 1)
	{
	  while ((test_break(data, a)) != 1)
	    a = rand() % (5 - 1) + 1;
	  break_wall(data, a);
        }
      else
	reset_postab(data);
      i = i + 1;
    }
  return (0);
}
