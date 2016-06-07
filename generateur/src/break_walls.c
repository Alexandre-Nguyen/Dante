/*
** break_walls.c for  in /home/brouar_a/rendu/intelartificielle/dante/generation lab/n_parfait/src
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Sun May 22 18:39:11 2016 pierre1 brouard
** Last update Tue Jun  7 16:28:16 2016 alexandre
*/

#include "fonction.h"

int	check_break(t_data *data)
{
  if ((data->j + 2) < data->width && data->map[data->i][data->j + 2] == 'X')
    return (1);
  else if ((data->j - 2) >= 0 && data->map[data->i][data->j - 2] == 'X')
    return (1);
  else if ((data->i + 2) < data->height
           && data->map[data->i + 2][data->j] == 'X')
    return (1);
  else if ((data->i - 2) >= 0 && data->map[data->i - 2][data->j] == 'X')
    return (1);
  return (0);
}

int	test_break(t_data *data, int a)
{
  int test;

  if (a == 1)
    test = check_case(data, data->i, data->j + 2);
  else if (a == 2)
    test = check_case(data, data->i, data->j - 2);
  else if (a == 3)
    test = check_case(data, data->i + 2, data->j);
  else if (a == 4)
    test = check_case(data, data->i - 2, data->j);
  if (test == 1)
    return (1);
  return (0);
}

void	second_break_wall(t_data *data, int a)
{
  if (a == 3)
    {
      data->map[data->i + 2][data->j] = '*';
      data->map[data->i + 1][data->j] = '*';
      data->postab[data->y][0] = data->i + 2;
      data->postab[data->y][1] = data->j;
      data->i = data->i + 2;
      data->y = data->y + 1;
    }
  else if (a == 4)
    {
      data->map[data->i - 2][data->j] = '*';
      data->map[data->i - 1][data->j] = '*';
      data->postab[data->y][0] = data->i - 2;
      data->postab[data->y][1] = data->j;
      data->i = data->i - 2;
      data->y = data->y + 1;
    }
}

void	break_wall(t_data *data, int a)
{
  if (a == 1)
    {
      data->map[data->i][data->j + 2] = '*';
      data->map[data->i][data->j + 1] = '*';
      data->postab[data->y][0] = data->i;
      data->postab[data->y][1] = data->j + 2;
      data->j = data->j + 2;
      data->y = data->y + 1;
    }
  else if (a == 2)
    {
      data->map[data->i][data->j - 2] = '*';
      data->map[data->i][data->j - 1] = '*';
      data->postab[data->y][0] = data->i;
      data->postab[data->y][1] = data->j - 2;
      data->j = data->j - 2;
      data->y = data->y + 1;
    }
  second_break_wall(data, a);
}
