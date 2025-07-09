#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

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

size_t	ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*one_arg(char	**argv);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    free_split(char     **spl);
void    stack_ini(t_stack_node **stack, char   **spl);
void tack(t_stack_node **stack, long   *arr, int count);
void to_node(t_stack_node    **stack,int l);
void	free_stack(t_stack_node **stack);
void    sorting(t_stack_node *a, t_stack_node *b);
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
t_stack_node	*max_stack(t_stack_node *stack);

#endif