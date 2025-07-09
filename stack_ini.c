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

void    stack_ini(char   **spl)
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
    free(arr);
}
