#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    char *str;
    size_t i = 0;

    str = malloc(len + 1);
    if (!str)
        return (NULL);
    ft_memcpy(str, s1, len + 1);
    return (str);
}