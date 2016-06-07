/*
** list.c for list in /home/alexandre/rendu/dante/profondeur/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Fri May 27 19:03:17 2016 alexandre
** Last update Sat May 28 15:58:49 2016 alexandre
*/

#include "list.h"
#include <stdlib.h>

t_list	*createlist()
{
  t_list	*list;

  if ((list = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  if (list != NULL)
    {
      list->x = 0;
      list->y = 0;
      list->state = 0;
      list->prev = NULL;
      list->next = NULL;
    }
  return (list);
}

t_list	*dellist(t_list *list)
{
  if (list->prev != NULL && list->next != NULL)
    {
      while (list->next != NULL)
	list = list->next;
      list = list->prev;
      free(list->next);
      list->next = NULL;
      return (list);
    }
  return (NULL);
}

t_list	*putlist(t_list *list, int x, int y)
{
  t_list	*new;

  if (list != NULL)
    {
      if ((new = malloc(sizeof(t_list))) == NULL)
	return (NULL);
      if (new != NULL)
	{
	  new->x = x;
	  new->y = y;
	  new->state = 0;
	  new->next = NULL;
	  list->next = new;
	  new->prev = list;
	}
      return (list);
    }
  return (NULL);
}
