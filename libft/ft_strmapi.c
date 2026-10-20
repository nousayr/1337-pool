#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *str;

    if(!s || !f)
        return NULL;
    str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return NULL;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}

char ft_f(unsigned int i, char c)
{
	return c + i;
}

#include <stdio.h>
int main()
{
    printf("%s", ft_strmapi("hello", ft_f));
}
