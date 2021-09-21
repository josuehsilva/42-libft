/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:22:52 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/19 03:17:33 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int n)
{
	int	c;

	c = 1;
	n = n / 10;
	while (n)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long int	longn;
	int			is_neg;
	int			len;
	char		*str;

	longn = n;
	is_neg = 0;
	if (n < 0)
	{
		longn = longn * (-1);
		is_neg = 1;
	}
	len = ft_countdigits(longn);
	str = malloc(is_neg + len + 1);
	if (!str)
		return (0);
	*str = '-';
	str[is_neg + len] = '\0';
	while (len)
	{
		str[is_neg + len - 1] = longn % 10 + '0';
		longn = longn / 10;
		len--;
	}
	return (str);
}
