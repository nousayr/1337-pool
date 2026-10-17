#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t len_str;
    char *str;
    size_t i = 0;
    if (!s)
        return NULL;
    len_str = strlen(s);
    if (start >= len_str)
    {
        len = 0;
    }
    else if (len_str - start < len)
        len = len_str - start;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[len] = '\0';
    return str;
}

int main()
{
    printf("%s", ft_substr("hello", 2147483647, 9223372036854775807));
}