#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        if (*(((const unsigned char *)s1 + i)) != *(((const unsigned char *)s2 + i)))
        {
            return (*(((const unsigned char *)s1 + i)) - *(((const unsigned char *)s2 + i)));
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[2];
    char str2[2];
    char str3[2];
    char str4[2];

    str1[1] = '\0';
    str2[1] = '\0';
    str3[1] = '\0';
    str4[1] = '\0';

    str1[0] = 5;
    str2[0] = 5;
    str3[0] = 0;
    str4[0] = 0;
    // printf("%i\n", memcmp(NULL, NULL, 2));
    printf("%i", ft_memcmp(NULL, NULL, 2));
}