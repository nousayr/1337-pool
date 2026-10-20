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

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        *((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
    }
    return(dst);
}

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    char *str;
    size_t i = 0;

    str = malloc(len + 1);
    if (!str)
        return (NULL);
    ft_memcpy(str, s1, len + 1);
    return (str);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%s", strdup(""));
    // printf("%s", ft_strdup(""));
}
