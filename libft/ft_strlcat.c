#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
    size_t i;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    i = dst_len;
    if (dst_len >= dstsize)
        return (dstsize + src_len);
    while (i < dstsize - 1 && *src)
    {
        dst[i] = *src++;
        i++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}