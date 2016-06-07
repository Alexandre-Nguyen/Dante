/*
** get_next_line.c for  in /home/brouar_a/rendu/Prog_Elem/CPE_2015_getnextline
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Tue Mar 29 09:16:50 2016 pierre1 brouard
** Last update Tue May  3 16:28:40 2016 pierre1 brouard
*/

#include "get_next_line.h"
#include <unistd.h>

void	my_memset(char *str, int size)
{
  char	*tmp;

  tmp = str;
  while (size > 0)
    {
      *tmp = 0;
      tmp++;
      size--;
    }
}

char		read_char(const int fd)
{
  static char	*tmp;
  static char	buffer[READ_SIZE];
  static int	ret = 0;
  char		c;

  if (ret == 0)
    {
      if ((ret = read(fd, buffer, READ_SIZE)) <= 0)
	return (0);
      tmp = buffer;
    }
  c = *tmp;
  tmp++;
  ret--;
  return (c);
}

char	*get_next_line(const int fd)
{
  char	c;
  char	*str;
  int	i;
  int	j;

  if ((str = malloc(READ_SIZE + 1)) == NULL || fd == -1)
    return (NULL);
  my_memset(str, READ_SIZE + 1);
  j = 2;
  i = 0;
  c = read_char(fd);
  while (c != '\n' && c != 0)
    {
      str[i++] = c;
      c = read_char(fd);
      if (i == (READ_SIZE * (j - 1)))
	{
	  str = my_realloc(str, READ_SIZE * j);
	  j++;
	}
    }
  str[i] = 0;
  if (str[0] == 0 && c == 0)
    return (NULL);
  return (str);
}
