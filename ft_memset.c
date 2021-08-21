/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 05:05:33 by joshenri          #+#    #+#             */
/*   Updated: 2021/08/21 05:57:42 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = dest;
	while (i < len)
	{
		mem[i] = (unsigned char) c;
		i++;
	}
	return (mem);
}
