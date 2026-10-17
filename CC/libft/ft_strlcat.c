int ft_strlen(char *str);

int	ft_strlcat(char *dest, const char *s, int destsize)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (s[i] && (i + dest_len + 1) < (destsize))
	{
		dest[dest_len + i] = s[i];
		i++;
	}
	if (i < destsize)
		dest[dest_len + i] = '\0';
	if (destsize <= dest_len)
		return (ft_strlen(s) + destsize);
	else
		return (ft_strlen(s) + dest_len);
}