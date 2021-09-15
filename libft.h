/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:21:10 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/15 00:10:57 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/*Basic Functions*/

int		ft_atoi(const char *str);

void	ft_bzero(void *b, size_t len);

void	*ft_calloc(size_t number, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memchr(const void *b, int c, size_t len);

int		ft_memcmp(const void *b1, const void *b2, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *dest, int c, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *s, int c);

int		tolower(int c);

int		toupper(int c);

/* Additional Functions */
#endif
