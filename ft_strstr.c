/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:09:22 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/11 14:23:09 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (ft_strlen(((char*)little)) == 0)
		return (((char*)big));
	while (((char*)big)[++i])
	{
		if (((char*)big)[i] == ((char*)little)[j])
			j++;
		else
		{
			i = i - j;
			j = 0;
		}
		if (!((char*)little)[j])
			return (((char*)big) + (i - j + 1));
	}
	if (!((char*)little)[++j])
		return (((char*)big) + (i - j + 1));
	return (NULL);
}
