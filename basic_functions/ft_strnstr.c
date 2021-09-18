/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:08:57 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/15 02:27:28 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ltlen;

	ltlen = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && (ltlen <= len--))
	{
		if (ft_strncmp(big, little, ltlen) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
