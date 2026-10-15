#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *str;
    size_t len;

    if ((count * size) / size != count)
        return (NULL);
    len = count * size;
    str = malloc(len);
    if (!str)
        return (NULL);
    return (ft_memset(str, 0, len));
}