#include "push_swap.h"

static long	ft_atol(const char *str)
{
	int		i;
	int		j;
	long	k;

	i = 0;
	j = 1;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = (k * 10) + (str[i] - '0');
		i++;
	}
	k = k * j;
	return (k);
}

long	*spl_atol(char	**spl,int	count)
{
	int			i;
	long		*arr;

	i = 0;
	arr = malloc(sizeof(long) * count);
	while (spl[i])
	{
		arr[i] = ft_atol(spl[i]);
		i++;
	}
	return (arr);
}

int	stack_error(long	*arr, int count)
{
	if (max_min(arr,count) == 1)
		return (1);
	if (dup_error(arr,count) == 1)
		return (1);
	return (0);
}

int	max_min(long	*arr,int	count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		printf("%ld i max\n",arr[i]);
		if (arr[i] > INT_MAX || arr[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	dup_error(long	*arr,int	count)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < count - 1)
	{
		printf("%ld i\n",arr[i]);
		j = i + 1;
		while (j < count)
		{
			printf("%ld j\n",arr[j]);
			if (arr[i] == arr [j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);

}