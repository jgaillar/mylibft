/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:09:22 by jgaillar          #+#    #+#             */
/*   Updated: 2016/12/05 11:31:03 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		while (big[i] == little[j] ||
				(big[i - 1] == little[j - 1] && little[j] == '\0'))
		{
			if (little[j] == '\0')
				return ((char *)big + i - j);
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
