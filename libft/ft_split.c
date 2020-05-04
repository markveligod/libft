/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:08:23 by ck                #+#    #+#             */
/*   Updated: 2020/05/04 08:22:43 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static int	size_word(char *str, int i, char c)
{
	int size;

	size = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

static void	put_word(char *str, char *arr, int i, int size)
{
	int k;

	k = 0;
	while (k < size)
	{
		arr[k] = str[i];
		i++;
		k++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**array;

	if (!s || !c)
		return (NULL);
	if (!(array = (char **)malloc(sizeof(char *) *
			(count_word((char *)s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (s[i] != c)
		{
			size = size_word((char *)s, i, c);
			if (!(array[j] = (char *)malloc(sizeof(char) * (size + 1))))
			{
				free(array);
				return (NULL);
			}
			put_word((char *)s, array[j], i, size);
			j++;
			i += size - 1;
		}
	return (array);
}
