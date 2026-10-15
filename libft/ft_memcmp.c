#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        if (*(((const char *)(s1 + i))) != *(((const char *)(s2 + i))))
        {
            if (*(((const char *)(s1 + i))) >= *(((const char *)(s2 + i))))
                return (1);
            else if (*(((const char *)(s1 + i))) < *(((const char *)(s2 + i))))
                return (0);
        }
        i++;
    }
    return (0);
}