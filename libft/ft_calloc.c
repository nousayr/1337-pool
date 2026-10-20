#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

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

void *ft_calloc(size_t count, size_t size)
{
    char *str;
    size_t len;

    if ((count * size) / size != count){
        printf("hello world");
        return (NULL);
    }
    if (count == 0 || size == 0)
    {
        size = 1;
        count = 1;
    }
    len = count * size;
    str = malloc(len);
    if (!str)
        return (NULL);
    return (ft_memset(str, 0, len));
}
int main()
{
    int *str;

    str = ft_calloc(1844674407370955161, 1844674407370955161);
    // str = calloc(5, 4);
    printf("%p", str);
}
