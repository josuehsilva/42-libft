/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:44:04 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/19 02:45:00 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			size;
	unsigned char	slen;
	char			*substr;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	if ((slen - start) > len)
		size = len;
	else
		size = slen - start;
	substr = (char *)malloc(size + 1);
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, size + 1);
	return (substr);
}
