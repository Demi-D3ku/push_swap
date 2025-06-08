/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:07:50 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/05 17:39:07 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	int		skip;

	word_count = 0;
	skip = 1;
	while (*s != '\0')
	{
		if (*s != c && skip == 1)
		{
			skip = 0;
			word_count++;
		}
		else if (*s == c)
			skip = 1;
		s++;
	}
	return (word_count);
}

static void	make_words(char **words, char const *s, char c, size_t n_words)
{
	char	*ptr_c;

	while (*s != 0 && *s == c)
		s++;
	while (n_words != 0)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c != '\0' && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
		n_words--;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	words = malloc(sizeof(char **) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	make_words(words, s, c, num_words);
	return (words);
}
