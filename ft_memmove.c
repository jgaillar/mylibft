/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:27:41 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/29 13:38:38 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dst;
	b = (char *)src;
	if (dst < src)
	{
		i = 0;
		while (len != i)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		while (len != 0)
		{
			len--;
			a[len] = b[len];
		}
	}
	return (dst);
}
