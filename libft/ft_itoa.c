#include <stdlib.h>
#include <stdio.h>

int len_nbr(int nbr)
{
    int len = 0;
    long n = (long)nbr;
    if (n <= 0)
    {
        len++;
        n = -n;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    char *str;
    int i;
    long nbr;

    i = len_nbr(n);
    nbr = (long)n;
    str = malloc(sizeof(char) * (i + 1));
    if(!str)
        return NULL;
    str[i] = '\0';
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    if(nbr == 0)
        str[0] = '0';
    while (nbr > 0)
    {
        str[i - 1] = nbr % 10 + '0';
        nbr /= 10;
        i--;
    }
    return str;
}

int main()
{
    char *str = ft_itoa(-556);
    printf("%s", str);
}