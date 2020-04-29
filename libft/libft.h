/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ck <ck@ck.fr>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:27:29 by ck                #+#    #+#             */
/*   Updated: 2020/04/29 18:27:29 by ck               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

void		*ft_memset(void *destination, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memccpy(void *dest, const void *source, int c, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t n);
void		*ft_memchr(const void *arr, int c, size_t n);
int			ft_memcmp(const void *array_1, const void *array_2, size_t n);
size_t		ft_strlen (const char *str);
size_t		strlcpy(char *dst, const char *src, size_t siz);
size_t		ft_strlcat(char *destination, const char *append, size_t n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
char		*ft_strnstr(const char *string_b, const char *string_a, size_t n);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int ch);
int			ft_isdigit(int ch);
int			ft_isalnum(int ch);
int			ft_isascii(int ch);
int			ft_isprint(int ch);
int			ft_toupper(int ch);
int			ft_tolower(int ch);
char		*ft_strdup(const char *str);
void		*ft_calloc(size_t number, size_t size);

#endif
