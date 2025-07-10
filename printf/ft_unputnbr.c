/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:10:14 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:19:21 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checknbr(int i, unsigned int j)
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

int	ft_unputnbr(unsigned int nb)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 1;
	while ((nb / j) > 9 && i < 10)
	{
		i = i + 1;
		j = j * 10;
	}
	k = i;
	while (i > 0 && j > 0)
	{
		ft_checknbr(nb, j);
		nb = nb % j;
		j = j / 10;
		i--;
	}
	return (k);
}
