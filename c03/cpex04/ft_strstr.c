#include <stdio.h>

char *ft_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j = 0;
    while (haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j])
        {
            j++;
            if (needle[j] == '\0')
            {
                return (&haystack[i]);
            }
        }
        i++;
    }
    return (haystack);
}

int main()
{
    printf("%s", ft_strstr("hello ahmad kif rak", "kif"));
}