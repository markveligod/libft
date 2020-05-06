/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:22:31 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/07 01:01:54 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fail_start(void)
{
	char *array;

	array = (char *)malloc(sizeof(char) * 1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			size;
	char			*array;
	char			*dst;

	i = 0;
	dst = (char *)s;
	if (!dst)
		return (NULL);
	size = ft_strlen(dst);
	if (size < start)
		return (fail_start());
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
