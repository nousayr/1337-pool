void *ft_memmove(void *dest, const void *src, int n)
{
	int	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*(((unsigned char *)(dest)) + i) = *(((unsigned char *)(src)) + i);
			i++;
		}
		return (dest);
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			*(((unsigned char *)(dest)) + i) = *(((unsigned char *)(src)) + i);
			i--;
		}
		return (dest);
	}
}

int main()
{
    char *str = "hello";
    char st[6];
    ft_memmove(st, str, 6);
}