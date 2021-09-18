/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:32:25 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:44 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trimmed;

	j = 0;
	k = ft_strlen(s1);
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	while (k > j && ft_strchr(set, s1[k - 1]))
		k--;
	trimmed = (char *)malloc((k - j + 1));
	if (!trimmed)
		return (0);
	i = 0;
	while (j < k)
		trimmed[i++] = s1[j++];
	trimmed[i] = '\0';
	return (trimmed);
}
