/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 05:59:14 by joshenri          #+#    #+#             */
/*   Updated: 2021/08/21 06:42:06 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = b;
	while (i < len)
	{
		mem[i] = '\0';
		i++;
	}
}
