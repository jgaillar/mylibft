/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:15:41 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/12 12:25:47 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*a;
	unsigned char		*b;
	unsigned char		d;
	size_t				i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == d)
			return (a + i + 1);
		i++;
	}
	return (NULL);
}
