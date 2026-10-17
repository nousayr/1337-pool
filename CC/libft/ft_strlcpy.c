int ft_strlen(char *str);

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i] && i + 1 < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize > 0)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}