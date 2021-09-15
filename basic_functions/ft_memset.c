/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 05:05:33 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/13 18:33:47 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;
	char	*destcpy;

	i = 0;
	destcpy = (char *)dest;
	while (i < len)
	{
		destcpy[i] = (char)c;
		i++;
	}
	return (dest);
}
