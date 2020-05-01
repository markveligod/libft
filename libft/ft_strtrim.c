/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:25:18 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/01 15:33:15 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_set(char ch, char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (ch == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t	size_str(char *str, char *set)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (check_set(str[i], set) == 0)
			size++;
		i++;
	}
	return (++size);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;
	char	*array;

	dst = (char *)s1;
	src = (char *)set;
	if (!dst || !src)
		return (NULL);
	if (!(array = (char *)malloc(sizeof(char) * size_str(dst, src))))
		return (NULL);
	i = 0;
	j = 0;
	while (dst[i])
	{
		if (check_set(dst[i], src) == 0)
		{
			array[j] = dst[i];
			j++;
		}
		i++;
	}
	array[j] = '\0';
	return (array);
}
