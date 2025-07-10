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

int		error_check(char	*c)
{
	if(valid_check(c) == 1)
		return (1);
	else if(number_check(c) == 1)
		return (1);
	else if(syntax_check(c) == 1)
		return (1);
	return (0);
}

int valid_check(char	*c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while(c[i])
	{
		if (c[i] == '+' || c[i] == '-' || (c[i] >= '0' && c[i] <= '9'))
			flag = 0;
		i++;
	}
	return(flag);
}

int	number_check(char	*c)
{
	int	i;
	
	i = 0;
	while(c[i])
	{
		if (!(c[i] == '+' || c[i] == '-' || (c[i] >= '0' && c[i] <= '9')) && ft_isspace(c[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	syntax_check(char	*c)
{
	int i;

	i = 0;
	while(c[i])
	{
		if(c[i] == '+' || c[i] == '-')
		{
			if(c[i-1] >= '0' && c[i-1] <= '9')
				return(1);
			if (!(c[i+1] >= '0' && c[i+1] <= '9'))
				return(1);
		}
		i++;
	}
	return(0);
}