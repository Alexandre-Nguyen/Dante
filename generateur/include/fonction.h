/*
** fonction.h for fonction in /home/alexandre/rendu/dante/include
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Fri Apr 29 20:27:37 2016 alexandre
** Last update Sun May 29 12:47:21 2016 alexandre
*/

#ifndef FONCTION_H_
# define FONCTION_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_data
{
  char			**map;
  int			**postab;
  int			width;
  int			height;
  int			i;
  int			j;
  int			x;
  int			y;
}			t_data;

char	**create_lab(char **map, int width, int height);
int	**create_postab(t_data *data, int **postab);
int     **set_postab(t_data *data, int  **postab);
int	check_nb(char *);
int	my_getnbr(char *);
int	check_case(t_data *, int, int);
int	check_break(t_data *);
int	test_break(t_data *, int);
int	set_lab(t_data *);
int	free_data(t_data *);
int	my_strcmp(char *, char *);
int	my_strlen(char *);
int	count_line(char **);
void	break_wall(t_data *, int);
void	set_imparfait(t_data *);
void	printab(char **);
void	free_tabs(char **);
void	free_inttab(int **);
void	my_puterror(char *);
void	my_putcharerror(char);

#endif /* !FONCTION_H_ */
