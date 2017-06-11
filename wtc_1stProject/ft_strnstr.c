/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 22:21:35 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/09 22:27:24 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t n;

	if (*little == '\0')
		return ((char *)big);
	n = ft_strlen(little);
	while (*big != '\0' && len-- >= n)
	{
		if (*big == *little && ft_memcmp(big, little, n) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
