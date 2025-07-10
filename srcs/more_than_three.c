#include "push_swap.h"

static void	rotate_both(t_stack_node **a,
						t_stack_node **b,
						t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target
		&& *a != cheapest_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

static void	rev_rotate_both(t_stack_node **a,
								t_stack_node **b,
								t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target
		&& *a != cheapest_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}

static void	a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest(*a); 
	if (cheapest_node->above_middle
		&& cheapest_node->target->above_middle)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_middle) 
		&& !(cheapest_node->target->above_middle))
		rev_rotate_both(a, b, cheapest_node);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node->target, 'b');
	pb(b, a);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != minimum_stack(*a)->nbr)
	{
		if (minimum_stack(*a)->above_middle)
			ra(a);
		else
			rra(a);
	}
}

void	more_than_three(t_stack_node **a, t_stack_node **b)
{
	int	a_count;

	a_count = stack_count(*a);
	if (a_count-- > 3 && !sorted(*a))
		pb(b, a);
	if (a_count-- > 3 && !sorted(*a))
		pb(b, a);
    while (a_count-- > 3 && !sorted(*a))
	{
		ini_a(*a, *b);
		a_to_b(a, b);
	}
    sort_three(a);
    while (*b)
	{
		ini_b(*a, *b);
		prep_for_push(a, (*b)->target, 'a');
		pa(a, b); 
	}
	current_index(*a);
	min_on_top(a);
}