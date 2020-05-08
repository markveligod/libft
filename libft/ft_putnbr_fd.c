/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:03:17 by ck                #+#    #+#             */
/*   Updated: 2020/05/08 10:03:44 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_module_fd(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	if (n < 0)
		ft_putchar_fd('-', fd);
	num = ft_module_fd(n);
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
