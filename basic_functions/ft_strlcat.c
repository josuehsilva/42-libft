/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:36:10 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/16 00:24:37 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0' && (len + 1) < dstsize)
		dst[len++] = src[i++];
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
