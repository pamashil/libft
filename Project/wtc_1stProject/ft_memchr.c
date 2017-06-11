/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:46:31 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 10:26:11 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const char *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == c)
			return (str);
		if (n)
			str++;
	}
	return (NULL);
}
