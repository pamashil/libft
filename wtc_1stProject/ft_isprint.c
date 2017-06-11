/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 21:09:20 by pamashil          #+#    #+#             */
/*   Updated: 2017/05/26 07:49:57 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (true);
	}
	return (false);
}
