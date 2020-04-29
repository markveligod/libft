/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:56:18 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/29 17:13:54 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	char *d;
	char *src;
	char ch;

	d = (char *)dest;
	src = (char *)source;
	ch = (char)c;
	while (n--)
	{
		*d++ = *src++;
		if (*(d - 1) == ch)
			return (d);
	}
	return (NULL);
}
