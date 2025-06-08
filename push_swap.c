/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:11:23 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/04 15:19:06 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*c;
    char    **sp;
    int     *arr;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
    if (argc >= 2)
        c = one_arg(argv);
    if(error_check(c) == 0)
    {
        sp = ft_split(c, ' ');
        arr=spl_atol(sp);
        printf("%d\n",arr[2]);
        free_split(sp);
        free(arr);
    }
    else if(error_check(c) == 1)
        printf("Error\n");
    free(c);
    return(0);
}
