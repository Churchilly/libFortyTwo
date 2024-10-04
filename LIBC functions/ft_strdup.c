#include "libft.h"

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
