#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*nmem;

	nmem = malloc(nmemb * size);
	if (!nmem)
		return (NULL);
	ft_memset(nmem, 0, nmemb * size);
	return (nmem);
}
