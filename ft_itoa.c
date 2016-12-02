/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:33:13 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/24 11:36:27 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_inser(int n, int i, char *str)
{
	long u;

	u = n;
	if (u < 0)
	{
		i++;
		u = u * -1;
		str[0] = '-';
	}
	while (i >= 0)
	{
		str[i - 1] = ((u % 10) + '0');
		i--;
		u = u / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	j;
	int		len;

	j = n;
	len = 1;
	str = NULL;
	if (n < 0)
	{
		j = j * -1;
	}
	while (j >= 10)
	{
		j = j / 10;
		len++;
	}
	if (!(str = (n >= 0) ? ft_strnew(len) : ft_strnew((len) + 1)))
		return (NULL);
	str = ft_inser(n, len, str);
	return (str);
}
