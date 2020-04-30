/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 08:13:36 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 08:13:36 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	if (start + len > size || !s)
		return (NULL);
	array = (char *)ft_calloc(sizeof(char), size + 1);
	if (array != NULL)
	{
		if (s[start] && s[start + len])
		{
			i = 0;
			while (i < len)
			{
				array[i] = s[start];
				start++;
				i++;
			}
		}
	}
	return (array);
}
