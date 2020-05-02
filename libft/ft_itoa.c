/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:26:57 by ck                #+#    #+#             */
/*   Updated: 2020/05/02 13:58:36 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(int n)
{
	int		count;
	long	res;

	res = n;
	count = 1;
	if (res < 0)
	{
		count++;
		res *= (-1);
	}
	while (res >= 10)
	{
		count++;
		res /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*array;
	long	res;
	int		i;

	i = 0;
	if (!(array = (char*)malloc(sizeof(char) * check_size(n) + 1)))
		return (NULL);
	if (n < 0)
		array[0] = '-';
	res = n;
	if (res < 0)
		res *= (-1);
	array[check_size(n) - i++] = '\0';
	while (res >= 10)
	{
		array[check_size(n) - i++] = (res % 10) + '0';
		res /= 10;
	}
	array[check_size(n) - i++] = (res % 10) + '0';
	return (array);
}
