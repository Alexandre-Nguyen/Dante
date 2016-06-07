/*
** dante.h for  in /home/brouar_a/rendu/intelartificielle/include
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Thu Apr  7 14:12:53 2016 pierre1 brouard
** Last update Fri May 27 17:45:57 2016 pierre1 brouard
*/

#ifndef DANTE_H_
# define DANTE_H_

#include <stdlib.h>

typedef struct	s_elem
{
  int		x;
  int		y;
  struct	s_elem *up;
  struct	s_elem *down;
  struct	s_elem *left;
  struct	s_elem *right;
  struct	s_elem *prev;
}		t_elem;

int	my_count_whitout_space(char *);
int	check_number_of_line(const int);
int	my_strlen(char *);
int	xmax(char **);
int	ymax(char **);
void	free_tab(char **);
void	free_list(t_elem **);
void	my_putstr(char *);
void	my_memset(char *, int);
void	printab(char **);
void	free_all(char **);
void	showlab(char **);
char	*my_strcat(char *, char *);
char	**getlab(const int);
char	**deep_solver(t_elem **, char **);
t_elem	**check_up_and_down(t_elem **, int, int, int);
t_elem	**check_left_and_right(t_elem **, int, int , int);
t_elem	**solver(t_elem **, char **);
t_elem	**set_cells(t_elem **);

#endif /* !DANTE_H_ */

