#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(unsigned int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
    ft_putchar(nb % 10 + '0');
}

void ft_j(char *str)
{
    int i = 1;
    int j = 0;
    int cou = 0;
    while (str[i])
    {
        if(str[i] == ' ' || str[j] == str[i])
        {
            if (str[i] == ' ')
            {
                cou++;
            }
            i++;
        }
        else if ((str[j] != str[i] || str[i] != ' '))
        {
            if (i - cou - j > 1)
            {
                ft_putnbr(i - cou - j);
            }
            if (str[j] != ' ')
            {
                ft_putchar(str[j]);
            }
            j = i;
            cou = 0;
            i++;
        }
    }

}
#include <stdio.h>
int main(int ac, char **av)
{
    ft_j("      aa   aahhhhjjj   ");
}