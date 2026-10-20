#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1;
    const unsigned char *s2;
    size_t i;

    s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;
    if (s1 < s2)
    {
        i = 0;
        while (i < len)
        {
            s1[i] = s2[i];
            i++;
        }
    }
    else if (s1 > s2)
    {
        i = len;
        while (i > 0)
        {
            s1[i - 1] = s2[i - 1];
            i--;
        }
    }
    return(s1);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[2];
    char str2[2];
    char str3[2];
    char str4[2];

    str1[0] = '\0';
    str2[0] = '\0';
    str3[0] = 'h';
    str4[0] = 'h';

    str1[1] = '\0';
    str2[1] = '\0';
    str3[1] = '\0';
    str4[1] = '\0';
    
    printf("%s", ft_memmove(NULL, NULL, 2));
    // printf("%s", memcpy(str + 2, str, 8));
}