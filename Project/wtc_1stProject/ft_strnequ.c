/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:57:16 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 03:20:51 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		result;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (n > i)
	{
		if (s1[i] == s2[i])
			result = 1;
		else
			result = 0;
		i++;
	}
	return (result);
}
