/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:27:17 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/14 13:57:37 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = 0;
	if (!(ret = (void *)malloc(sizeof(void) * (size))))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
