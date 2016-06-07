/*
** standar.c for standar in /home/alexandre/rendu/dante/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Apr  7 14:37:11 2016 alexandre
** Last update Sun May 29 12:46:43 2016 alexandre
*/

#include "fonction.h"

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

int	count_line(char **map)
{
  int   i;

  i = 0;
  while (map[i] != NULL)
    i = i + 1;
  return (i);
}

int	my_getnbr(char *str)
{
  int   signe;
  int   nb;
  int   i;

  i = 0;
  nb = 0;
  signe = 1;
  if (check_nb(str) != 0)
    return (-1);
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	signe = signe * (-1);
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i = i + 1;
    }
  nb = nb * signe;
  return (nb);
}
