/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prototypes.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 11:10:33 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/11 10:17:23 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "ft_booleans.h"
# include "ft_chars.h"
# include "ft_ints.h"
# include "ft_s_list.h"

t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_lstdel(t_list **lint, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **link, void (*del)(void *, size_t));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
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
void		*ft_memccpy(void *s1, const char *s2, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const char *s, int c, size_t n);
void		*ft_memmove(void *dst, const char *src, size_t len);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, char *src, size_t size);
size_t		ft_strlcatchar(char *dest, char *src, size_t size);

#endif
