/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:09:00 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 16:09:00 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *temp;

	if (lst && *lst && new)
    {
		temp = (t_list *)*lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*lst = new;
}