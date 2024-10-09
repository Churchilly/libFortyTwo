/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:56:24 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/07 22:11:42 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_to_trim( int c, const char *set)
{
	while (*set)
	{
		if ((char)c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;
	size_t	len_trim;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_to_trim(s1[start], set))
		start++;
	while (ft_to_trim(s1[end], set))
		end--;
	len_trim = (end - start) + 1;
	if (len_trim <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	p = ft_calloc(len_trim + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1 + start, len_trim);
	return (p);
}
