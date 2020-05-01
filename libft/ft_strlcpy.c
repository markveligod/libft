/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:14:47 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 14:12:04 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*s;
	size_t			i;
	size_t			res;

	s = (unsigned char *)src;
	res = ft_strlen(s);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (s[i] && --size)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (res);
}
