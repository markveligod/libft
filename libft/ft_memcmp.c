/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:02:15 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/29 11:02:25 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *array_1, const void *array_2, size_t n)
{
	unsigned char *arr_1;
	unsigned char *arr_2;

	arr_1 = (unsigned char *)array_1;
	arr_2 = (unsigned char *)array_2;
	while (n--)
	{
		if (*arr_1 != *arr_2)
			return (*arr_1 - *arr_2);
		else
		{
			arr_1++;
			arr_2++;
		}
	}
	return (0);
}
