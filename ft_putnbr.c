/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:42:40 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/29 17:33:48 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	size_t a;

	a = (size_t)n;
	if (n < 0)
	{
		a = a * -1;
		ft_putchar('-');
	}
	if (a < 10)
	{
		ft_putchar(a + '0');
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}
