/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 10:35:06 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 10:35:06 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_module_num(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

static int	size_num(int n)
{
	int count;

	count = 0;
	while (n > 10)
	{
		count++;
		n /= 10;
	}
	return (count + 1);
}

static void	put_num_in_arr(char *array, int n, int size, int sing)
{
	int num;

	while (sing <= size)
	{
		num = n % 10;
		array[size] = ft_module_num(num) + '0';
		n /= 10;
		size--;
	}
	if (sing == 1)
		array[0] = '-';
}

char		*ft_itoa(int n)
{
	int		size;
	int		sing;
	char	*array;

 	if (n == -2147483648)
		return ("-2147483648");
	size = size_num(ft_module_num(n));
	if (n < 0)
	{
		sing = 1;
		size++;
	}
	else
		sing = 0;
	array = (char *)ft_calloc(sizeof(char), (size + 1));
	if (array != NULL)
		put_num_in_arr(array, n, (size - 1), sing);
	return (array);
}
