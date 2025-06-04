/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:47:36 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/04 14:43:27 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	i = 0;
	if (dst != 0)
		dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	else
	{
		while (src[i] && i < dstsize - dstlen - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = 0;
	}
	return (dstlen + ft_strlen(src));
}
