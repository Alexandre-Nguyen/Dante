/*
** main.c for  in /home/brouar_a/rendu/intelartificielle
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Thu Apr  7 14:14:06 2016 pierre1 brouard
** Last update Tue Jun  7 16:29:51 2016 alexandre
*/

#include "fonction.h"

int	start(t_data *data, char **argv)
{
  if ((data->width = my_getnbr(argv[1])) < 1)
    return (free_data(data));
  if (((data->height = my_getnbr(argv[2])) < 1)
      || ((data->height == 1) && (data->height == data->width)))
    return (free_data(data));
  if (my_getnbr(argv[1]) == 1 && my_getnbr(argv[2]) == 2)
    return (free_data(data));
  data->map = create_lab(data->map, data->width, data->height);
  if (set_lab(data) != 0)
    return (1);
  return (0);
}

int	main(int argc, char **argv)
{
  t_data	*data;

  if ((data = malloc(sizeof(t_data))) == NULL)
    return (1);
  if (argc != 3 && argc != 4)
    return (free_data(data));
  if (argc == 4 && my_strcmp(argv[3], "parfait") != 0)
    return (free_data(data));
  if (start(data, argv) != 0)
    return (1);
  data->map[data->height - 1][data->width - 1] = '*';
  data->map[data->height - 1][data->width - 2] = '*';
  if (argc == 3)
    set_imparfait(data);
  printab(data->map);
  free_tabs(data->map);
  free_inttab(data->postab);
  free(data);
  return (0);
}
