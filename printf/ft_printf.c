/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:35:15 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:18:04 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		c;
	va_list	arg;
	int		j;

	c = 0;
	j = 0;
	if (!format)
		return (-1);
	va_start (arg, format);
	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			c = c + ft_check(format[j + 1], arg);
			j++;
		}
		else
			c = c + ft_putchar(format[j]);
		j++;
	}
	va_end (arg);
	return (c);
}
