#include "push_swap.h"

void    sorting(t_stack_node *a, t_stack_node *b)
{
    if (stack_count(a) == 2)
        sa(&a);
    else if (stack_count(a) == 3)
        sort_three (&a);
    else
        more_than_three (&a,&b);
    free_stack(&a);
    free_stack(&b);
}

void	sort_three(t_stack_node **a)
{
	t_stack_node	*max_node;

	max_node = maximum_stack(*a);
	if (max_node == *a)
		printf("ra\n");
	else if ((*a)->next == max_node)
		printf("rra\n");
	if ((*a)->nbr > (*a)->next->nbr)
		printf("sa\n");
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

t_stack_node	*get_cheapest(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cost_eff)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}