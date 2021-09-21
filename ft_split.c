/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:35:52 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/19 04:11:25 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strclen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	nwords;

	nwords = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break ;
		s = s + ft_strclen(s, c);
		nwords++;
	}
	return (nwords);
}

static	void	*clear(char **words, int i)
{
	while (i--)
	{
		free(*words);
		words++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	len;
	char	**splited;
	int		i;

	if (!s)
		return (0);
	words = ft_countwords(s, c);
	splited = (char **)malloc(sizeof(char *) * (words + 1));
	if (!splited)
		return (0);
	i = 0;
	while (words--)
	{
		while (*s == c)
			s++;
		len = ft_strclen(s, c);
		splited[i] = malloc(len + 1);
		if (!splited[i])
			return (clear(splited, i));
		ft_strlcpy(splited[i++], s, len + 1);
		s = s + len;
	}
	splited[i] = NULL;
	return (splited);
}
