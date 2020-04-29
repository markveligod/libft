/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:57:51 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/29 10:58:32 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char *dest;
	char *src;

	dest = (char *)destination;
	src = (char *)source;
	if (dest >= src)
	{
		dest += n - 1;
		src += n - 1;
		while (n--)
			*dest-- = *src--;
	}
	else
	{
		while (n--)
			*dest++ = *src++;
	}
	return (destination);
}
