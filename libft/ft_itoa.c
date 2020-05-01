/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:26:57 by ck                #+#    #+#             */
/*   Updated: 2020/05/01 14:57:11 by ck               ###   ########.fr       */
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

static int	check_sign(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

char		*ft_itoa(int n)
{
	int				i;
	int				sign;
	char			*array;
	unsigned int	u_n;

	if (n == 0)
		return (ft_strdup("0"));
	sign = check_sign(n);
	array = (char *)malloc(sizeof(char) * 12);
	if (!array)
		return (NULL);
	u_n = ft_module_num(n);
	i = 0;
	while (u_n != 0)
	{
		array[i++] = (u_n % 10) + '0';
		u_n /= 10;
	}
	if (sign == -1)
		array[i++] = '-';
	array[i] = '\0';
	return (ft_strrev(array));
}
