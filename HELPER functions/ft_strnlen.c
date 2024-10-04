#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char	*p;

	p = s;
	while (*p && maxlen--)
		p++;
	return (p - s);
}