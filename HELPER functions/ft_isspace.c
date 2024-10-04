#include "libft.h"

t_bool	ft_ispace(int c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}