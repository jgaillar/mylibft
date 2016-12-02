/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:19:48 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/29 15:28:26 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	*ft_aff(char *a, char const *s, int i, int len)
{
	int k;

	k = 0;
	while (k < len)
	{
		a[k] = s[i];
		i++;
		k++;
	}
	a[k] = '\0';
	return (a);
}

char			*ft_strtrim(char const *s)
{
	char	*a;
	int		i;
	int		len;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		while (s[len - 1] == ' ' || s[len - 1] == ',' || s[len - 1] == '\n'
				|| s[len - 1] == '\t')
			len--;
		if (len > 0)
		{
			while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
			{
				i++;
				len--;
			}
		}
		if (!(a = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		a = ft_aff(a, s, i, len);
		return (a);
	}
	return (NULL);
}
