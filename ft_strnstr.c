/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:59:19 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/30 12:36:30 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (ft_strlen(little) > len && ft_strlen(big) != 0)
		return (NULL);
	if (ft_strlen(((char *)little)) == 0)
		return (((char *)big));
	while (((char *)big)[++i] && i < len)
	{
		if (((char *)big)[i] == ((char *)little)[j])
			j++;
		else
		{
			i = i - j;
			j = 0;
		}
		if (!((char *)little)[j] || j == len)
			return (((char *)big) + (i - j + 1));
	}
	if (!((char *)little)[j] || j == len)
		return (((char *)big) + (i + j + 1));
	return (NULL);
}
