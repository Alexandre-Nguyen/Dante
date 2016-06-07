/*
** my_strcmp.c for  in /home/brouar_a/rendu/intelartificielle/dante/generateur/imparfait/src
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Sat May 28 15:38:30 2016 pierre1 brouard
** Last update Sat May 28 15:47:07 2016 pierre1 brouard
*/

#include "fonction.h"

int	my_strcmp(char *str, char *str2)
{
  int	i;

  i = 0;
  if (my_strlen(str) != my_strlen(str2))
    return (1);
  while (str[i] != 0)
    {
      if (str[i] != str2[i])
	return (1);
      i++;
    }
  return (0);
}
