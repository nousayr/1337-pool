#include <unistd.h>

char *strrchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    while (i >= 0)
    {
        if (s[i] == (char) c)
        {
            return (s + i);
        }
        i--;
    }
    return (NULL);
}
