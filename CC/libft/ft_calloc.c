#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
    void *str;
    int i;

    if (count && size && (count * size) / size != count)
        return (NULL);
    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    str = malloc(count * size);
    if (!str)
        return (NULL);
    i = 0;
	while (i < size * count)
	{
		*(unsigned char *)(str + i) = 0;
		i++;
	}
	return (str);
}