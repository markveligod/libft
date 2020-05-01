/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:48:39 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 21:23:34 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *start;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	start = new_lst;
	while (lst)
	{
		if (lst->next)
		{
			new_lst->next = ft_lstnew(f(lst->next->content));
			if (!new_lst->next)
			{
				free(new_lst->next);
				return (NULL);
			}
			new_lst = new_lst->next;
		}
		lst = lst->next;
	}
	new_lst->next = NULL;
	return (start);
}
