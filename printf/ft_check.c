/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:16:31 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:19:56 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list arg)
{
	int	i;

	i = 0;
	if (c == '%')
		i = ft_putchar('%');
	else if (c == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(arg, int));
	else if (c == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (c == 'u')
		i = ft_unputnbr(va_arg(arg, unsigned int));
	else if (c == 'p')
		i = ft_putptr(va_arg(arg, unsigned long));
	else if (c == 'x')
		i = ft_puthexsmall(va_arg(arg, unsigned int));
	else if (c == 'X')
		i = ft_puthexbig(va_arg(arg, unsigned int));
	return (i);
}
