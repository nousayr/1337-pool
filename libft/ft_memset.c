#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	size_t i = 0;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)x;
		i++;
	}
	return ((void *)ptr);
}
// 00000000 00000000 00000000 00000001
// 00000000
#include <stdio.h>
int main()
{
	char s[5];
	s[4] = '\0';
	ft_memset(s, '1', 4);
	printf("%s", s);
}