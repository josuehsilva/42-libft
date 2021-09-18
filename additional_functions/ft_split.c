/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:35:52 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/18 20:12:36 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*p;

	p = malloc(n + 1);
	if (!p)
		return (0);
	ft_memcpy(p, s, n);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr_split;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	ptr_split = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
	if (!ptr_split)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
			ptr_split[k++] = ft_strndup(s + j, i - j);
	}
	ptr_split[k] = '\0';
	return (ptr_split);
}
