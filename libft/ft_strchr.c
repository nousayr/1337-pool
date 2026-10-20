#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t len = ft_strlen(s);
    size_t i = 0;
    while (i <= len)
    {
        if (s[i] == (char)c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    // printf("%s\n", ft_strchr("ab", '\0'));
    char *str = strchr(NULL, '\0');
    printf("%i", str[0]);
}