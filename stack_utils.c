#include "push_swap.h"

t_stack_node	*last_one(t_stack_node *stack)
{
    if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

bool	sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next) 
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
    }
	return (true);
}

int	stack_count(t_stack_node *stack)
{
	int	count;

	if (!stack) 
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}