/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:03:47 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/09 16:51:54 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t __size);
void	free(void *p);

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	t_bool	on_word;

	i = 0;
	on_word = 0;
	while (*s)
	{
		if (*s != c && !on_word)
		{
			on_word = 1;
			i++;
		}
		else if (*s == c && on_word)
			on_word = 0;
		s++;
	}
	return (i);
}

static char	*ft_word_dup(const char *s, size_t size)
{
	char	*dup;
	size_t	i;

	dup = malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static t_bool	ft_split_words(char **split, const char *s, char c)
{
	const char	*p;
	size_t		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			p = s;
			while (*s && *s != c)
				s++;
			split[i] = ft_word_dup(p, s - p);
			if (!(split[i]))
			{
				ft_free(split);
				return (0);
			}
			i++;
		}
		if (*s)
			s++;
	}
	split[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	if (!ft_split_words(split, s, c))
		return (NULL);
	return (split);
}
