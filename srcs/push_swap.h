#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

typedef struct s_stack_node //A container of data enclosed in {} braces. `s_` for struct
{
	int					nbr;
	int					index;
	int					cost;
	bool				above_middle;
	bool				cost_eff;
	struct s_stack_node	*target;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

char	*one_arg(char	**argv);
void    free_split(char     **spl);
void tack(t_stack_node **stack, long   *arr, int count);
void to_node(t_stack_node    **stack,int l);
void	free_stack(t_stack_node **stack);
void    sorting(t_stack_node *a, t_stack_node *b);
void	sort_three(t_stack_node **a);
void	ss(t_stack_node **a, t_stack_node **b);
void	sb(t_stack_node **b);
void	sa(t_stack_node **a);
void	rr(t_stack_node **a, t_stack_node **b);
void	rb(t_stack_node **b);
void	ra(t_stack_node **a);
void	rrr(t_stack_node **a, t_stack_node **b);
void	rrb(t_stack_node **b);
void	rra(t_stack_node **a);
void	pb(t_stack_node **b, t_stack_node **a);
void	pa(t_stack_node **a, t_stack_node **b);
void	more_than_three(t_stack_node **a, t_stack_node **b);
void    stack_ini_sort(t_stack_node *a,t_stack_node *b, char   **spl);
void	set_cheapest(t_stack_node *stack);
void	current_index(t_stack_node *stack);
void	ini_a(t_stack_node *a, t_stack_node *b);
void	ini_b(t_stack_node *a, t_stack_node *b);
void	prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);
int ft_isspace(char     c);
int error_check(char	*c);
int valid_check(char	*c);
int number_check(char	*c);
int syntax_check(char	*c);
int	stack_error(long	*arr,int    count);
int     counter(char    **spl);
int	dup_error(long	*arr,int	count);
int max_min(long	*arr,int    count);
int	stack_count(t_stack_node *stack);
long	*spl_atol(char	**spl,int   count);
bool	sorted(t_stack_node *stack);
t_stack_node	*last_one(t_stack_node *stack);
t_stack_node	*maximum_stack(t_stack_node *stack);
t_stack_node	*minimum_stack(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);

#endif