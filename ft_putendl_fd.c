/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:44:38 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/09 16:50:21 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_ssize_t.h>

ssize_t	write(int fd, const void *buf, size_t nbyte);

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		s = "(null)";
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
