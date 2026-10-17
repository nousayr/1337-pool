int ft_atoi(char *str)
{
    int i = 0;
    int sin = 1;
    long nbr = 0;
    if (!str)
        return (0);
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '+')
    {
        i++;
    }
    else if (str[i] == '-')
    {
        sin *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr *= 10;
        nbr += str[i] - '0';
        i++;
    }
    return ((int)(nbr * sin));
}

#include <stdio.h>
int main()
{
    int n = ft_atoi("-2147483648");
    printf("%i", n);
}