#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == (char) c)
        {
            return (s + i);
        }
        i++;
    }
	if (s[i] == (char) c)
		return (s + i);
    return (NULL);
}