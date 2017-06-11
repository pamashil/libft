/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:39:22 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/09 11:59:51 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const char *s2, int c, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	unsigned char		cur;

	if (n)
	{
		str1 = (unsigned char *)s1;
		str2 = (const unsigned char *)s2;
		cur = (unsigned char)c;
		while (n-- != 0)
			if ((*str1++ = *str2++) == cur)
				return (str1);
	}
	return (0);
}
