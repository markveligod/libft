#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *start;

	if(!lst || !f)
		return (NULL);
	new_lst = f(lst);
	start = new_lst;
       	while (lst->next)
	{
		lst = lst->next;
		if (!(new_lst->next = f(lst)))
		{
			free(new_lst->next);
			return (NULL);
		}
		new_lst = new_lst->next;
	}
	return (start);
}
