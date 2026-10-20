#include <unistd.h>
#include <stdio.h>

void ft_puchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    ft_puchar(nb % 10 + '0');
}

int ft_prime(int nbr)
{
    int i = 2;
    while (i * i <= nbr)
    {
        if (nbr % i == 0)
        {
            return 0;
        }
        i++;
    }
    return nbr;
}

int add_prime_sum(int nbr)
{
    int nb = 0;
    int i = 2;
    while (i <= nbr)
    {
        nb += ft_prime(i);
        i++;
    }
    return nb;
}

int main()
{
    ft_putnbr(add_prime_sum(5));
}