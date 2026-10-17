#include <unistd.h>

char *strstr(const char *haystack, const char *needle, int n)
{
    int i = 0;
    int j;
    if (!haystack || !needle)
    {
		return (NULL);
    }
    if (needle[0] == '\0')
    {
        return haystack;
    }
    while (i < n && haystack[i])
    {
        if (haystack[i] == needle[j])
        {
            j = 0;
            while (needle[j] && i + j < n && (haystack[i + j] == needle[j]))
            {
                j++;
            }
        }
        i++;
    }
    if (needle[i] == '\0')
    {
        return (haystack[i]);
    }
    else
    {
        return (NULL);
    }
}