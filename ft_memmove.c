/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:51:54 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/13 16:43:12 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	buffer[len];
	char	*dstcpy;
	char	*source;

	i = 0;
	source = (char *)src;
	dstcpy = (char *)dst;
	while (i < len)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstcpy[i] = buffer[i];
		i++;
	}
	return (dst);
}
