
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *arr_list;

	arr_list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!arr_list)
		return (NULL);
	arr_list->content = content;
	arr_list->next = NULL;
	return (arr_list);
}
