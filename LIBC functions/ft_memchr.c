#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = s;
	ch = c;
	while (n--)
	{
		if (*str == ch)
		{
			return ((void *)str);
		}
		str++;
	}
	return (NULL);
}
