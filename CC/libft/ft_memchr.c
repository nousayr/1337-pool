#include <unistd.h>

void    *ft_memchr(const void *s, int c, int n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    int i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return (NULL);
}