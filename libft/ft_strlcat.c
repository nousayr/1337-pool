#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
    size_t i;
    size_t j = 0;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    i = dst_len;
    if (dst_len >= dstsize)
        return (dstsize + src_len);
    while (i < dstsize - 1 && *src && j < src_len)
    {
        dst[i] = *src++;
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}

#include <stdio.h>

int    main(void)
{
    #undef strlcat
    char    dst[120] = "abc";
    ft_strlcat(dst, dst, 120);
    printf("Return: %s\n", dst);
    return (0);
}