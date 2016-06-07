/*
** get_next_line.h for  in /home/brouar_a/rendu/Prog_Elem/CPE_2015_getnextline
** 
** Made by pierre1 brouard
** Login   <brouar_a@epitech.net>
** 
** Started on  Tue Mar 29 09:14:08 2016 pierre1 brouard
** Last update Wed May 11 17:08:30 2016 pierre1 brouard
*/

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#ifndef READ_SIZE
# define READ_SIZE (8)
# endif /* !READ_SIZE */

#include <stdlib.h>

void	my_memset(char *, int);
char	*my_realloc(char *, int);
char	read_char(const int);
char	*get_next_line(const int);

#endif /* !GET_NEXT_LINE */
