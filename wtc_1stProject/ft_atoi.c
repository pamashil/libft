/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 19:34:23 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 02:23:17 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || (c == 32))
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int			sign;
	char		*curr;
	int			i;
	int			n;
	int			big;

	i = 0;
	curr = (char *)str;
	n = 0;
	big = 0;
	while (ft_isspace(*curr))
	{
		curr++;
	}
	if (curr[i] == '-')
		sign = -1;
	else
		sign = 1;
	if (curr[i] == '+' || curr[i] == '-')
		curr = curr + 1;
	while (curr[i] != '\0' && curr[i] >= '0' && curr[i] <= '9')
	{
		n = n * 10 + curr[i] - '0';
		i++;
		big++;
	}
	if (big > 19)
		return ((sign < 0) ? 0 : -1);
	n = n * sign;
	return (n);
}
