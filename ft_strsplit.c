/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:45:31 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/29 17:02:03 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int			ft_wnb(char const *s, char c)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nb);
}

static	char		**ft_filltab(char const *s, char **str, char c, int nb)
{
	int i;
	int j;
	int u;

	i = 0;
	j = 0;
	u = 0;
	while (s[i] != '\0' && u < nb)
	{
		i = j;
		j = 0;
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c)
			j++;
		str[u] = ft_strsub(s, i, j - i);
		u++;
	}
	str[u] = NULL;
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		nb;

	if (s)
	{
		nb = ft_wnb(s, c);
		if (!(str = (char **)ft_memalloc(sizeof(char *) * (nb + 1))))
			return (NULL);
		str = ft_filltab(s, str, c, nb);
		return (str);
	}
	return (NULL);
}
