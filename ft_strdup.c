/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:37:25 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/04 14:43:29 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*c;

	i = ft_strlen(s);
	if (s == 0 && i == 0)
		return (0);
	c = malloc(sizeof(char) * (i + 1));
	if (c == 0)
		return (0);
	ft_memcpy(c, s, i);
	c[i] = '\0';
	return (c);
}

t_stack_node	*max_stack(t_stack_node *stack)
{
	long			mx;
	t_stack_node	*max_node;

	if (!stack)
		return (NULL);
	mx = LONG_MIN;
	while (stack)
	{
		if (stack->nbr > mx)
		{
			mx = stack->nbr;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}