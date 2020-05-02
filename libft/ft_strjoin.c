/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:15:30 by ck                #+#    #+#             */
/*   Updated: 2020/05/02 13:11:10 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*array;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		array = (char *)ft_calloc(sizeof(char), size + 1);
		if ((array = (char *)ft_calloc(sizeof(char), size + 1)) != NULL)
		{
			i = 0;
			j = -1;
			while (s1[++j])
				array[i++] = s1[j];
			j = -1;
			while (s2[++j])
				array[i++] = s2[j];
			array[i] = '\0';
		}
		return (array);
	}
	return (NULL);
}
