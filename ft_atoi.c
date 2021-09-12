/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:23:32 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/12 15:08:30 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	n;
	int	result;

	c = 0;
	n = 1;
	result = 0;
	while (str[c] == '\f' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\r' || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			n = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = (result * 10);
		result += (str[c] - 48);
		c++;
	}
	return (result * n);
}
