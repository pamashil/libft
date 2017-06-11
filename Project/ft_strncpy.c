/* ****************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:36:20 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/09 16:25:13 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t i;

	i = 0;
	while ((i < len) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < len)
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
