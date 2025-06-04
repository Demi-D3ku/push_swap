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

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
    if (argc >= 2)
    {
        c = one_arg(argv);
    }
    printf("%s\n",c);
    free(c);
    return(0);
}
