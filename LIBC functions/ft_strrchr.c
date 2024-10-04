#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = s;
		s++;
	}
	if ((char)c == '\0')
		p = s;
	return ((char *)p);
}
