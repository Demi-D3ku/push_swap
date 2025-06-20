/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:11:23 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/09 14:13:42 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*c;
    char    **sp;

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
        stack_ini(sp);
        free_split(sp);
    }
    else if(error_check(c) == 1)
        printf("Error\n");
    free(c);
    return(0);
}
