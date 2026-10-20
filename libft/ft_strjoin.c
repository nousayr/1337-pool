#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i = 0;
    int j = 0;
    if (!s1 || !s2)
    {
        return NULL;
    }
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(!str)
        return NULL;
    while (s1[i])
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return str;
}
#include <stdio.h>
int main()
{
    char *str = ft_strjoin(NULL, NULL);
    printf("%s\n", str);
    printf("%p", str);
}