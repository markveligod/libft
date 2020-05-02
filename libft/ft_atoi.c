/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakuna <ckakuna@sc21.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 13:35:09 by ckakuna           #+#    #+#             */
/*   Updated: 2020/05/02 12:53:00 by ckakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\v' ||
			ch == '\r' || ch == '\n' || ch == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				sing;
	int				count;
	long long int	res;

	i = 0;
	res = 0;
	count = 0;
	sing = 1;
	while (check(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sing = ((str[i] == '-') ? -1 : 1);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
		count++;
		if (count > 19)
			return ((sing == -1) ? 0 : -1);
	}
	return (res * sing);
}
