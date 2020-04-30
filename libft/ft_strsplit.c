/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 10:07:22 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 10:07:22 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_word(char *str, char c)
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

static int size_word(char *str, int i, char c)
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

static void  put_word(char *str, char *arr, int i, int size)
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

char **ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int size;
	char *str;
	char **array;

	str = (char *) s;
	array = (char **)ft_calloc(sizeof(char *), (count_word(str, c) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			size = size_word(str, i, c);
			array[j] = (char *)ft_calloc(sizeof(char), (size + 1));
			if (array[j] == NULL)
				return (NULL);
			put_word(str, array[j], i, size);
			j++;
			i += size - 1;
		}
		i++;
	}
	return (array);
}
