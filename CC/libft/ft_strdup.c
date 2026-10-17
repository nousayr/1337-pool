#include <stdlib.h>

char *strdup(const char *s)
{
    int i = 0;
    char *str;
    int len_s = ft_strlen(s);
    str = malloc(sizeof(char) * (len_s + 1));
    if (!str)
        return(NULL);
    while (i < len_s)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}