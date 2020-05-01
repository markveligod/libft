/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:03:17 by ck                #+#    #+#             */
/*   Updated: 2020/05/01 15:04:22 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_module_fd(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

void		ft_putnbr_fd(int n, int fd)
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
