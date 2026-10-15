#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t len = ft_strlen(s);
    size_t i = 0;
    while (i <= len)
    {
        if (s[i] == (char)c)
        {
            return (s + i);
        }
        i++;
    }
    return (NULL);
}