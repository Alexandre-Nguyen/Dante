/*
** standar.c for standar in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Apr  7 14:37:11 2016 alexandre
** Last update Wed May 11 17:18:12 2016 pierre1 brouard
*/

#include "dante.h"

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

char	*my_realloc(char *str, int size)
{
  char  *newstr;
  int   i;

  newstr = malloc(size + my_strlen(str) + 1);
  if (newstr == NULL)
    return (NULL);
  my_memset(newstr, size + my_strlen(str) + 1);
  i = 0;
  while (str[i] != 0)
    {
      newstr[i] = str[i];
      i++;
    }
  newstr[i] = 0;
  free(str);
  return (newstr);
}

char	*my_epur_str(char *str)
{
  char  *str2;
  int   i;
  int   a;

  i = a = 0;
  a = my_count_whitout_space(str);
  if ((str2 = malloc(a + 1)) == NULL)
    return (NULL);
  str2[a] = 0;
  a = 0;
  while (str[i] != 0)
    {
      if ((i > 0 && str[i - 1] != ' ' && str[i] == ' ') || str[i] != ' ')
	{
	  str2[a] = str[i];
	  a++;
	}
      i++;
    }
  if (str2[a - 1] == ' ')
    str2[a - 1] = 0;
  return (str2);
}
