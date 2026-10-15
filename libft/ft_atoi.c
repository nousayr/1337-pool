int	ft_atoi(const char *str)
{
	int		i;
	int		sine;
	long	val;

	i = 0;
	sine = 1;
	val = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sine *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (val > (9223372036854775807 - (str[i] - '0')) / 10)
		{
			if (sine == -1) return (0);
			else return (-1);
		}
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (sine * (int)val);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi("-9223372036854775808"));
	printf("%d", atoi("-9223372036854775808"));
}


