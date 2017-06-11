/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prototypes.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 11:10:33 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 14:07:25 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_chars.h"
# include "ft_ints.h"

void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putnbr(int nbr);
void		ft_putstr(char const *s);
void		ft_memdel(void **ap);
void		ft_bzero(void	*s, size_t n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_strclr(char *s);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f) (char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		*ft_memalloc(size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const char *src, size_t len);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, char *src, size_t size);
size_t		ft_strlcatchar(char *dest, char *src, size_t size);

#endif
