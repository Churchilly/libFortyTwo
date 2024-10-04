#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// Corrected implementation of ft_strdup

char *ft_strdup(const char *s)
{
	char	*p;
	size_t	len_s;

	len_s = strlen(s);
	p = malloc(sizeof(char) * (len_s + 1));
	if (!p)
		return (NULL);
	memcpy(p, s, len_s);
	return (p);
}

// Function to test ft_strdup
void test_ft_strdup(const char *s)
{
    char *result = ft_strdup(s);
    char *expected = strdup(s);
    printf("ft_strdup(\"%s\") = \"%s\", expected = \"%s\"\n", s, result, expected);
    free(result);
    free(expected);
}

int main()
{
    // Test cases
    test_ft_strdup("hello world"); // Expected: "hello world"
    test_ft_strdup("");            // Expected: ""
    test_ft_strdup("42");          // Expected: "42"

    return 0;
}