/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:15:30 by ck                #+#    #+#             */
/*   Updated: 2020/05/01 15:16:03 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*array;

	size = ft_strlen(s1) + ft_strlen(s2);
	array = (char *)ft_calloc(sizeof(char), size + 1);
	if (array != NULL)
	{
		i = 0;
		j = -1;
		while (s1[++j])
		{
			array[i] = s1[j];
			i++;
		}
		j = -1;
		while (s2[++j])
		{
			array[i] = s2[j];
			i++;
		}
	}
	return (array);
}
