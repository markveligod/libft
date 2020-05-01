/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:55:33 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 12:46:57 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void *)dest);
}
