/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 09:35:34 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 09:38:02 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_S_LIST_H
# define FT_S_LIST_H
#	include "libft.h"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
