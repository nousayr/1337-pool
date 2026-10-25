#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char save1;
    char save2;
    int k = 0;
    if (ac != 3)
    {
        ft_putchar('\n');
        return 0;
    }
    if (av[1] == NULL || av[2] == NULL)
    {
        ft_putchar('\n');
        return 0;
    }
    while (av[2][k])
    {
        if (!((av[2][k] >= 'a' && av[2][k] <= 'z') || (av[2][k] >= 'A' && av[2][k] <= 'Z')))
        {
            ft_putchar('\n');
            return 0;
        }
        k++;
    }
    while (av[1][i] != '\0')
    {
        if (av[2][j] == '\0')
            j = 0;
        if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            save1 = 'A';
        else if (av[1][i] >= 'a' && av[1][i] <= 'z')
            save1 = 'a';
        if (av[2][j] >= 'A' && av[2][j] <= 'Z')
            save2 = 'A';
        else if (av[2][j] >= 'a' && av[2][j] <= 'z')
            save2 = 'a';
        if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
        {
            ft_putchar((((av[1][i] - save1) + (av[2][j] - save2)) % 26) + save1);
            j++;
        }
        else
            ft_putchar(av[1][i]);
        i++;
    }
        ft_putchar('\n');
}