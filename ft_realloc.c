/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:48:03 by jgaillar          #+#    #+#             */
/*   Updated: 2016/12/05 13:48:24 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

char    *ft_realloc(char *s, size_t len)
{
    char    *new;

    if (!s)
        return (NULL);
    if (!(new = (char *)ft_memalloc(sizeof(char) * len)))
        return (NULL);
    ft_memcpy(new, s, len);
    return (new);
}
