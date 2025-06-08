#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

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
int     ft_isspace(char     c);
int		error_check(char	*c);
int     valid_check(char	*c);
int	    number_check(char	*c);
int     syntax_check(char	*c);
int *spl_atol(char  **spl);

#endif