/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:20:42 by wlwin             #+#    #+#             */
/*   Updated: 2025/06/04 15:18:45 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*one_arg(char	**argv)
{
	char	*c;
	int		i;
	char	*temp;

	c = ft_strdup(argv[1]);
	i = 2;
	while (argv[i])
	{
		temp = ft_strjoin(c, " ");
        if (!temp)
        {
            free(c);
            return NULL;
        }
		free(c);
		c = temp;
		temp = ft_strjoin(c, argv[i]);
        if(!temp)
        {
            free(c);
            return NULL;
        }
        free(c);
        c = temp;
		i++;
	}
	return (c);
}
