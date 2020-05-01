/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:46:11 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 20:46:18 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	t_list	*prev;

	temp = (t_list *)lst;
	if (temp)
	{
		while (temp)
		{
			prev = (t_list *)temp;
			temp = temp->next;
		}
		return (prev);
	}
	else
		return (temp);
}
