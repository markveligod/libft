/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ck@ck.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:08:23 by ck                #+#    #+#             */
/*   Updated: 2020/05/05 12:08:51 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *str, char c)
{
	int i;
	int count;
	int word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i])
			word = 1;
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			if (str[i])
				count++;
		}
		else
			i++;
	}
	return (count + word);
}

static	char	*put_word(char *str, char c)
{
	int		i;
	char	*arr;

	i = 0;
	arr = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(arr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strlcpy(arr, str, i + 1);
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**array;

	i = -1;
	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	if (!(array = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (++i < words)
	{
		while (s[0] == c)
			s++;
		if (!(array[i] = put_word((char *)s, c)))
		{
			while (i > 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		s += ft_strlen(array[i]);
	}
	array[i] = 0;
	return (array);
}
