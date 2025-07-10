/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexbig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:12:42 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:18:54 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned int i)
{
	int	c;

	c = 0;
	while (i > 0)
	{
		c++;
		i = i / 16;
	}
	return (c);
}

static void	ft_printhex(unsigned int i)
{
	if (i >= 16)
	{
		ft_printhex(i / 16);
		ft_printhex(i % 16);
	}
	else
	{
		if (i <= 9)
			ft_putchar(i + '0');
		else
			ft_putchar(i - 10 + 'A');
	}
}

int	ft_puthexbig(unsigned int i)
{
	if (i == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
	{
		ft_printhex(i);
		return (ft_hexlen(i));
	}
}
