#include "push_swap.h"

static void	rev_rot(t_stack_node **stack)
{
	t_stack_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = last_one(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack_node **a)
{
	rev_rot(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	rev_rot(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	rev_rot(a);
	rev_rot(b);
	ft_printf("rrr\n");
}
