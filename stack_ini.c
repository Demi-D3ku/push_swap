/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:31:50 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/09 15:09:25 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     counter(char    **spl)
{
    int c;

    c = 0;
    while (spl[c])
        c++;
    return(c);
    
}

void    stack_ini(t_stack_node **stack,char   **spl)
{
    int     i;
    int     count;
    long    *arr;
    
    count = counter(spl);
    i = 0;
    arr = spl_atol(spl ,count);
    if (stack_error(arr, count) == 1)
    {
        printf("Error\n");
    }
    tack(stack, arr, count);
    free(arr);
}

void tack(t_stack_node **stack, long   *arr, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        to_node(stack,(int)arr[i]);
        i++;
    }
}

void to_node(t_stack_node    **stack,int l)
{
    t_stack_node	*node;
    t_stack_node	*last_node;

    if (!stack)
		return ;
    node = malloc(sizeof(t_stack_node));
    if (!node)
		return ;
    node->next = NULL;
    node->nbr = l;
    node->cost_eff = 0;
    if (!(*stack))
    {
		*stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = last_one(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}