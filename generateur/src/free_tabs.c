/*
** free_tabs.c for  in /home/brouar_a/rendu/intelartificielle/dante/generateur/parfait
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Sun May 22 19:40:38 2016 pierre1 brouard
** Last update Sat May 28 16:58:20 2016 pierre1 brouard
*/

#include <unistd.h>
#include "fonction.h"

void	my_putcharerror(char c)
{
  write(2, &c, 1);
}

void	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putcharerror(str[i]);
      i++;
    }
}

int	free_data(t_data *data)
{
  free(data);
  my_puterror("Invalid argument : Usage : ./generateur x y [parfait]\n");
  return (1);
}

void	free_inttab(int	**tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

void	free_tabs(char **map)
{
  int	i;

  i = 0;
  while (map[i] != NULL)
    {
      free(map[i]);
      i++;
    }
  free(map);
}
