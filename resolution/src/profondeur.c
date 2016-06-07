/*
** profondeur.c for profondeur in /home/alexandre/rendu/dante/profondeur/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Fri May 27 19:09:09 2016 alexandre
** Last update Tue Jun  7 16:18:18 2016 alexandre
*/

#include "list.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ways(char **map, t_list *list)
{
  while (list != NULL)
    {
      map[list->y][list->x] = 'o';
      list = list->next;
    }
}

int	check_possibility(char **map, t_list *list, int i, int j)
{
  if ((j + 1) <= my_strlen(map[0]) && map[i][j + 1] == '*')
    {
      putlist(list, (j + 1), i);
      return (1);
    }
  if ((j - 1) >= 0 && map[i][j - 1] == '*')
    {
      putlist(list, (j - 1), i);
      return (1);
    }
  if ((i + 1) != count_line(map) && map[i + 1][j] == '*')
    {
      putlist(list, j, (i + 1));
      return (1);
    }
  if ((i - 1) >= 0 && map[i - 1][j] == '*')
    {
      putlist(list, j, (i - 1));
      return (1);
    }
  list->state = 1;
  return (0);
}

void	go_back(char **map, t_list *list, int i, int j)
{
  map[i][j] = ' ';
  if (map[0][0] == ' ')
    {
      my_putstr("No solution found\n");
      exit(0);
    }
  dellist(list);
}

void	traitement(char **map, t_list *list)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while ((check_end(map, i, j)) != 1)
    {
      if ((check_possibility(map, list, i, j)) != 0)
	{
	  map[i][j] = '-';
	  list = list->next;
	  i = list->y;
	  j = list->x;
	}
      else
	{
	  go_back(map, list, i, j);
	  list = list->prev;
	  i = list->y;
	  j = list->x;
	}
    }
}

int	main(int argc, char **argv)
{
  t_list	*list;
  int		fd;
  char		**lab;

  list = createlist();
  if (argc != 2)
    return (1);
  if ((fd = open(argv[1], O_RDONLY)) == -1)
    return (1);
  if ((lab = getlab(fd)) == NULL)
    return (1);
  traitement(lab, list);
  ways(lab, list);
  finission(lab);
  showlab(lab);
  return (0);
}
