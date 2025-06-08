#include "push_swap.h"

static long	ft_atol(const char *str)
{
	int	i;
	int	j;
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

int *spl_atol(char  **spl)
{
    int i;
    int count;
    int *arr;

    i = 0;
    count = 0;
    while(spl[count])
    {
        count++;
    }
    arr = malloc(sizeof(long) * count);
    while(spl[i])
    {
        arr[i] = ft_atol(spl[i]);
        i++;
    }
    return(arr);
}