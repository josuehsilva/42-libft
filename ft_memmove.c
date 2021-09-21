/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:51:54 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/18 22:46:50 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcpy;
	char	*source;

	if (!dst && !src)
		return (0);
	source = (char *)src;
	dstcpy = (char *)dst;
	if (source < dstcpy)
	{
		while (len)
		{
			len--;
			dstcpy[len] = source[len];
		}
	}
	else
		ft_memcpy(dstcpy, source, len);
	return (dst);
}
