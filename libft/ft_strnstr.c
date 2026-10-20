#include "libft.h"

const char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    if(needle[0] == '\0')
        return (haystack);
    while (i < len && haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
            j++;
        if(needle[j] == '\0')
            return(&haystack[i]);
        i++;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%s", ft_strnstr(NULL, "NULL", 0));
    // printf("%s", strnstr(NULL, "NULL", 0));
    // printf("%s", strnstr("hello", NULL, 5));
}