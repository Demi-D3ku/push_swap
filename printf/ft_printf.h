/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:09 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:18:31 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int i);
int	ft_putstr(char *c);
int	ft_puthexsmall(unsigned int i);
int	ft_puthexbig(unsigned int i);
int	ft_putptr(unsigned long l);
int	ft_unputnbr(unsigned int i);
int	ft_printf(const char *c, ...);
int	ft_check(char c, va_list arg);

#endif
