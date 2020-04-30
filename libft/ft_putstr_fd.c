/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 11:25:55 by ckakuna           #+#    #+#             */
/*   Updated: 2020/04/30 11:25:55 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_putstr_fd(char const *s, int fd)
{
	int i;
	char *str;

	i = 0;
	str = (char *) s;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
