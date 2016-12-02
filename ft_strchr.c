/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:47:03 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/11 12:27:30 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (b[i])
	{
		if (b[i] == c)
			return (b + i);
		else
			i++;
	}
	if (c == '\0')
		return (b + i);
	return (NULL);
}
