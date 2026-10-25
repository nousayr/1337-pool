#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_1(int n)
{
    if (n == 5 || n == 6 || n == 4)
    {
        write(1, "|o o|", 5);
    }
    else if(n == 3 || n == 2)
    {
        write(1, "|o  |", 5);
    }
    else
    {
        write(1, "|   |", 5);
    }
}

void ft_2(int n)
{
    if (n == 1 || n == 3 || n == 5)
    {
        write(1, "| o |", 5);
    }
    else if (n == 6)
    {
        write(1, "|o o|", 5);
    }
    else
    {
        write(1, "|   |", 5);
    }
}

void ft_3(int n)
{
    if (n == 5 || n == 6 || n == 4)
    {
        write(1, "|o o|", 5);
    }
    else if(n == 3 || n == 2)
    {
        write(1, "|  o|", 5);
    }
    else
    {
        write(1, "|   |", 5);
    }
}

int	ft_atoi(char *str)
{
	int	i;
	int	sine;
	int	val;

	i = 0;
	sine = 1;
	val = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sine *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += str[i] - '0';
		i++;
	}
	return (sine * val);
}

int main(int ac, char **av)
{
    int j = 1;
    int n = 0;
    // while (j < )
    // {
    //     /* code */
    // }
    
    write(1, "+---+\n", 6);
    while (j < ac)
    {
        n = ft_atoi(av[j]);
        if (n > 0 && n <= 6)
        {
            ft_1(n);
        }
        j++;
    }
    j = 1;
    ft_putchar('\n');
    while (j < ac)
    {
        n = ft_atoi(av[j]);
        if (n > 0 && n <= 6)
        {
            ft_2(n);
        }
        j++;
    }
    j = 1;
    ft_putchar('\n');
    while (j < ac)
    {
        n = ft_atoi(av[j]);
        if (n > 0 && n <= 6)
        {
            ft_3(n);
        }
        j++;
    }
        ft_putchar('\n');
        write(1, "+---+\n", 6);
}