/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:54:45 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/09 16:30:02 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t __size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*nmem;

	nmem = malloc(nmemb * size);
	if (!nmem)
		return (NULL);
	ft_memset(nmem, 0, nmemb * size);
	return (nmem);
}
