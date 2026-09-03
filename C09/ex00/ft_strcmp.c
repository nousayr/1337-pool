#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// void ft_putnbr(int nb)
// {
//     if (nb == -2147483648)
//     {
//         write(1, "-2147483648", 11);
//     }
//     else if (nb < 0)
//     {
// 		write(1, "-", 1);
// 		nb = -nb;
// 		ft_putnbr(nb);
//     }
//     else if (nb > 9)
//     {
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
//     }
//     else
//     {
//         nb+=48;
//         write(1, &nb, 1);
//     }
// }

// int main()
// {
//     char *s1 = "hello4";
//     char *s2 = "hello";

//     ft_putnbr(ft_strcmp(s1, s2));
//     write(1, "\n", 1);
// }