
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = (t_list *)lst;
	if (temp && f)
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
}
