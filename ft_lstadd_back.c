#include <stdlib.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
  t_list *last;
  if (!lst || !new)
    return;
  if (!*lst)
    *lst = new;
  else {
    last = *lst;
    while(last->next)
      last = last->next;
    last->next = new;
  }
}
