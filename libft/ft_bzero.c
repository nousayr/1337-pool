#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    str = (unsigned char *)s;
    while (n > 0)
    {
        *str++ = 0;
        n--;
    }
}

void ft_zero(void *s, size_t n)
{
    char *str;
    str = (char *)s;
    while (n > 0)
    {
        *str++ = 0;
        n--;
    }
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5];
    str[4] = '\0';
    ft_bzero(str, 0);
    // ft_zero(str, 0);
    int i = 0;
    while (i < 4)
    {
        printf("%i", str[i]);
        i++;
    }
}