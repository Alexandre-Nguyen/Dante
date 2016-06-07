/*
** standar2.c for standar2 in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Apr  7 14:45:18 2016 alexandre
** Last update Tue Apr 26 16:59:18 2016 pierre1 brouard
*/

#include "dante.h"

int	my_count_whitout_space(char *str)
{
  int   i;
  int   a;

  i = a = 0;
  while (str[a] != 0)
    {
      if (a > 0 && str[a - 1] != ' ' && str[a] == ' ')
	i++;
      if (str[a] != ' ')
	i++;
      a++;
    }
  return (i);
}

int	check_number_of_words(char *str)
{
  int   a;
  int   i;

  i = a = 0;
  if (str[i] != ' ')
    a++;
  while (str[i] != 0)
    {
      if (i > 0 && str[i - 1] == ' ' && str[i] != ' ')
	a++;
      i++;
    }
  return (a);
}

int		check_word_size(char *str)
{
  static int    i = 0;
  int           a;

  a = 0;
  while (str[i] == ' ' && str[i] != 0)
    i++;
  while (str[i] != 0 && str[i] != ' ')
    {
      a++;
      i++;
    }
  return (a);
}

void		word_in_tab(char *dest, char *str)
{
  static int    i = 0;
  int           a;

  a = 0;
  while (str[i] == ' ' && str[i] != 0)
    i++;
  while (str[i] != 0 && str[i] != ' ')
    {
      dest[a] = str[i];
      a++;
      i++;
    }
}

char	**my_str_to_wordtab(char *str)
{
  char  **tab;
  int   a;
  int   i;
  int   count;
  int   size;

  count = i = 0;
  a = check_number_of_words(str);
  if ((tab = malloc((a + 1) * sizeof(char *))) == NULL)
    return (NULL);
  tab[a] = NULL;
  while (count < a)
    {
      if ((tab[count] = malloc(size = (check_word_size(str) + 1))) == NULL)
	return (NULL);
      tab[count][size - 1] = 0;
      word_in_tab(tab[count], str);
      count++;
    }
  return (tab);
}
