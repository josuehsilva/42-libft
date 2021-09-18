/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:21:10 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/18 18:51:22 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
* Basic Functions
*/

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

int		ft_tolower(int c);

int		ft_toupper(int c);

/*
* Additional Functions
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_itoa(int n);

char	**ft_split(char const *s, char c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
