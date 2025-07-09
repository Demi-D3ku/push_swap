#include "push_swap.h"

void    sorting(t_stack_node *a, t_stack_node *b)
{
    if (stack_count(a) == 2)
        printf ("sa\n");
    else if (stack_count(a) == 3)
        sort_three (&a);
}

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a, false);
	else if ((*a)->next == biggest_node)
		rra(a, false);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a, false);
}