/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 12:24:36 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 14:19:02 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_str(char *string_b, char *string_a, size_t i, size_t n)
{
	size_t j;

	j = 0;
	while (string_a[j] != '\0')
	{
		if (string_b[i] != string_a[j] || i > n)
			return (i);
		i++;
		j++;
	}
	return (0);
}

char		*ft_strnstr(const char *string_b, const char *string_a, size_t n)
{
	int		count;
	char	*src;
	char	*dst;
	char	*res;
	size_t	i;

	if (!*string_a)
		return ((char *)string_b);
	src = (char *)string_a;
	dst = (char *)string_b;
	res = NULL;
	i = -1;
	while (dst[++i] != '\0')
		if (dst[i] == src[0] && i <= n)
		{
			res = &dst[i];
			if (count = check_str(dst, src, i, n) != 0)
			{
				i += count;
				res = NULL;
			}
			else
				break ;
		}
	return (res);
}
