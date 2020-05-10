
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = (t_list*)lst;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
