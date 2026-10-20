#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// printf("%zu", ft_strlen(NULL));
// 	printf("%zu", strlen(NULL));
// }