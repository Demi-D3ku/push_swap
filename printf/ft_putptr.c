/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:46:48 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:19:10 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlength(unsigned long i)
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

static void	ft_printptr(unsigned long i)
{
	if (i >= 16)
	{
		ft_printptr(i / 16);
		ft_printptr(i % 16);
	}
	else
	{
		if (i > 9)
		{
			i = (i - 10) + 'a';
			ft_putchar(i);
		}
		else
			ft_putchar(i + '0');
	}
}

int	ft_putptr(unsigned long i)
{
	int	l;

	l = 2;
	if (i == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	else
	{
		write (1, "0x", 2);
		ft_printptr(i);
		l = l + ft_ptrlength(i);
	}
	return (l);
}
