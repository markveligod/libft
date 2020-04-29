/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:01:28 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/29 11:01:39 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char *str;
	char ch;

	str = (char *)arr;
	ch = (char)c;
	while (n--)
	{
		if (*++str == ch)
			return (str);
	}
	return (NULL);
}
