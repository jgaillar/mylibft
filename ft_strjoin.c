/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:45:23 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/21 10:27:19 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	a = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(a = (char *)malloc(sizeof(char) * ft_strlen(s1) +
					ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (s1[j])
		a[i++] = s1[j++];
	while (s2[k])
		a[i++] = s2[k++];
	a[i] = '\0';
	return (a);
}
