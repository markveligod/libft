/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:56:24 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/29 11:57:14 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *append, size_t n)
{
	size_t i;
	size_t res;

	i = ft_strlen(destination);
	if (n < i)
		res = n + ft_strlen(append);
	else
		res = i + ft_strlen(append);
	if (n > i)
	{
		destination += i;
		n -= i;
		while (*append && n--)
			*destination++ = *append++;
		*destination = '\0';
	}
	return (res);
}
