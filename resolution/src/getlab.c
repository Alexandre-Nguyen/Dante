/*
** getlab.c for  in /home/brouar_a/rendu/intelartificielle/resolution/profondeur
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Fri May 13 16:01:33 2016 pierre1 brouard
** Last update Sun May 29 15:48:58 2016 alexandre
*/

#include <sys/types.h>
#include <unistd.h>
#include "dante.h"
#include "get_next_line.h"

t_elem	**set_cells(t_elem **cell)
{
  int	i;

  i = 0;
  while (cell[i] != NULL)
    {
      cell[i]->up = NULL;
      cell[i]->down = NULL;
      cell[i]->right = NULL;
      cell[i]->left = NULL;
      cell[i]->prev = NULL;
      i++;
    }
  return (cell);
}

char	**getlab(const int fd)
{
  int   i;
  int   a;
  char  **lab;
  char  *str;

  a = 0;
  if (lseek(fd, 0, SEEK_SET) == -1)
    return (NULL);
  if ((i = check_number_of_line(fd)) == 0)
    return (NULL);
  if (lseek(fd, 0, SEEK_SET) == -1)
    return (NULL);
  if ((lab = malloc((i + 1) * sizeof(char *))) == NULL)
    return (NULL);
  lab[i] = NULL;
  while (a < i)
    {
      if ((str = get_next_line(fd)) == NULL)
	return (NULL);
      lab[a] = str;
      a++;
    }
  return (lab);
}
