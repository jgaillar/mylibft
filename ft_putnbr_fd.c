/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:58:04 by jgaillar          #+#    #+#             */
/*   Updated: 2016/11/29 18:00:59 by jgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	size_t a;

	a = (size_t)n;
	if (n < 0)
	{
		a = a * -1;
		ft_putchar_fd('-', fd);
	}
	if (a < 10)
	{
		ft_putchar_fd(a + '0', fd);
	}
	else
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
}
