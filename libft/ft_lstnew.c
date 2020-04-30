/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:59:56 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 14:59:56 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *arr_list;

	arr_list = (t_list *)malloc(sizeof(t_list));
	if (arr_list == NULL)
		return (NULL);
	else if (content)
	{
		if (!(arr_list->content = (void*)malloc(sizeof(t_list))))
			return (NULL);
		else
			ft_memcpy(arr_list->content, content, sizeof(content));
	}
	else if (!content)
		arr_list->content = NULL;
	arr_list->next = NULL;
	return (arr_list);
}
