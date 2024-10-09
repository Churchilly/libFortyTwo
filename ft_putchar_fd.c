/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:40:08 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/09 16:49:39 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_ssize_t.h>

ssize_t	write(int fd, const void *buf, size_t nbyte);

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
