/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:26:29 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/18 22:20:23 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*source;
	char		*dstcpy;

	i = 0;
	if (!dst && !src)
		return (0);
	source = (const char *)src;
	dstcpy = (char *)dst;
	while (i < len)
	{
		dstcpy[i] = source[i];
		i++;
	}
	return (dst);
}
