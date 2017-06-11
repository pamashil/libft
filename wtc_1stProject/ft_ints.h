/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ints.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:31:19 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/06 13:46:35 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTS_H
# define FT_INTS_H
# include "libft.h"

int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
int	ft_strcmp(char const *s1, char const *s2);
int	ft_strncmp(char const *s1, char const *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *str);

#endif
