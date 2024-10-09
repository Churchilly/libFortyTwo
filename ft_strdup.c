/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:55:55 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/09 16:52:46 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t __size);

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	p = malloc(sizeof(char) * len_s);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, len_s);
	return (p);
}
