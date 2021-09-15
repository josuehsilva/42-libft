/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:06:07 by joshenri          #+#    #+#             */
/*   Updated: 2021/09/15 01:57:10 by joshenri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*p;
	int		strlen;

	strlen = ft_strlen(str);
	p = malloc(strlen + 1);
	if (!p)
		return (0);
	ft_memcpy(p, str, strlen);
	return (p);
}
