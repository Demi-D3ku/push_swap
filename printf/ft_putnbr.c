/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:55:10 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:48:11 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int i)
{
	int	c;

	c = 0;
	if (i < 0)
	{
		c++;
		if (i == -2147483648)
			i++;
		i = i * -1;
	}
	else if (i == 0)
		return (1);
	while (i > 0)
	{
		c++;
		i = i / 10;
	}
	return (c);
}

static int	ft_negative(int nb)
{
	int	o;

	o = 0;
	if (nb < -2147483647)
	{
		write (1, "-2147483648", 11);
		o = -1;
	}
	else if (nb < 0 && nb >= -2147483647)
	{
		write (1, "-", 1);
		o = nb * -1;
	}
	else if (nb > 0)
	{
		o = nb;
	}
	return (o);
}

static void	ft_checknbr(int i, int j)
{
	int	k;

	if ((i / j) != 0)
	{
		k = (i / j) + '0';
		write (1, &k, 1);
	}
	else
	{
		write (1, "0", 1);
	}
}

int	ft_putnbr(int nb)
{
	int	i;
	int	j;
	int	k;

	k = nb;
	nb = ft_negative(nb);
	if (nb >= 0)
	{
		i = 1;
		j = 1;
		while ((nb / j) > 9 && i < 10)
		{
			i = i + 1;
			j = j * 10;
		}
		while (i > 0 && j > 0)
		{
			ft_checknbr(nb, j);
			nb = nb % j;
			j = j / 10;
			i--;
		}
	}
	return (ft_nbrlen(k));
}
