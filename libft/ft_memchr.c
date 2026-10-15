#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *str = (unsigned char *)s;
    while (i < n)
    {
        if ((unsigned char)c == str[i])
        {
            return (&str[i]);
        }
        i++;
    }
    return (NULL);
}