#include <unistd.h>

void *ft_memset(void *s, int c, int n)
{
    int i = 0;
    if (s == NULL)
        return (NULL);
    while (i < n)
    {
        *(unsigned char *)(s + i) = c;
        i++;
    }
    return s;
}