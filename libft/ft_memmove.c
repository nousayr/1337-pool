#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1;
    unsigned char *s2;
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
        i = len - 1;
        while (i >= 0)
        {
            s1[i] = s2[i];
            i--;
        }
    }
    return(s1);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "helloworld";
    printf("%s", memmove(str + 2, str, 8));
    // printf("%s", memcpy(str + 2, str, 8));
}