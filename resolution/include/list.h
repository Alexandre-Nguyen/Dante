/*
** list.h for list in /home/alexandre/rendu/dante/profondeur/include
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Fri May 27 19:04:48 2016 alexandre
** Last update Sat May 28 16:36:48 2016 alexandre
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct		s_list
{
  int		x;
  int		y;
  int		state;
  struct s_list *prev;
  struct s_list *next;
}			t_list;

void	my_putchar(char c);
void	my_putstr(char *str);
void	printab(char **str);
char	**getlab(const int fd);
void	my_memset(char *str, int size);
char	read_char(const int fd);
char	*get_next_line(const int fd);
t_list	*createlist(void);
t_list	*dellist(t_list *list);
t_list	*putlist(t_list *list, int x, int y);
int	count_line(char **map);
int	check_end(char **map, int i, int j);
void	finission(char **map);
void	ways(char **map, t_list *list);
int	check_possibility(char **map, t_list *list, int i, int j);
void	go_back(char **map, t_list *list, int i, int j);
void	traitement(char **map, t_list *list);
int	check_number_of_line(const int fd);
void	showlab(char **lab);
int	my_strlen(char *str);
char	*my_realloc(char *str, int size);
char	*my_epur_str(char *str);
int	my_count_whitout_space(char *str);
int	check_number_of_words(char *str);
int	check_word_size(char *str);
void	word_in_tab(char *dest, char *str);
char	**my_str_to_wordtab(char *str);

#endif
