/*
** check_nb.c for  in /home/brouar_a/rendu/intelartificielle/dante/generateur
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Sat May 28 17:00:41 2016 pierre1 brouard
** Last update Sat May 28 17:01:49 2016 pierre1 brouard
*/

int	check_nb(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] > '9' || str[i] < '0')
	return (-1);
      i++;
    }
  return (0);
}
