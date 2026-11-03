#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (i[s])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len + 1);
	return (str);
}

void ft_pad(char *save, char *s, int len)
{
    int i = 0;
    while (i < len)
    {
        save[i] = s[i];
        i++;
    }
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len_s - start < len)
		len = len_s - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char *get_next_line(int fd)
{
    char *str;
    char *save;
    int i = 0;

    str = (char *)malloc(BUFFER_SIZE);
    read(fd, str, BUFFER_SIZE);
    while (str[i] && str[i] != '\n')
    {
        i++;
    }
    if (str[i] == '\n')
    {
        save = (char *)malloc(i + 1);
        ft_pad(save, str, i + 1);
    }
    return save;
}

int main()
{
    int fd = open("foo.txt", O_RDONLY);
    char *str = get_next_line(fd);
    printf("%s", str);
}