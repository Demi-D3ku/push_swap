#include "push_swap.h"

static void	rot(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = last_one(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack_node **a)
{
	rot(a);
	ft_printf("ra\n");
}

void	rb(t_stack_node **b)
{
	rot(b);
	ft_printf("rb\n");
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	rot(a);
	rot(b);
	ft_printf("rr\n");
}
