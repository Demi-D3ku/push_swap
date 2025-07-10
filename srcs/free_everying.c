#include "push_swap.h"

void	free_split(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
	{
		free(spl[i]);
		i++;
	}
	free(spl);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*curr;

	if (!stack)
		return ;
	curr = *stack;
	while (curr)
	{
		tmp = curr->next;
		curr->nbr = 0;
		free(curr);
		curr = tmp;
	}
	*stack = NULL;
}
