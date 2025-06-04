/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:28:27 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/04 14:50:42 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				l;

	s1 = (unsigned char *)(dest);
	s2 = (unsigned char *)(src);
	l = 0;
	if (!dest && !src)
		return (0);
	while (l < n)
	{
		s1[l] = s2[l];
		l++;
	}
	return (dest);
}
