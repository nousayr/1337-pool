#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

int ft_check(char *str, char c)
{
    int i = 0;
    int n = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            n++;
        }
        i++;
    }
    return n;
}

void ft_iada(char *a1, char *a2)
{
    int i = 0;
    while (ft_check(a1, a1[i]) == ft_check(a2, a1[i]) && a1[i])
    {
        i++;
    }
    if (a1[i] == '\0')
    {
        write(1, "1", 1);
    }
	else if(a1[i])
        write(1, "0", 1);
    
}
#include <stdio.h>
int main(int ac, char **av)
{
	if(ac == 3)
    {
        if (ft_strlen(av[1] != ft_strlen(av[2])))
        {
            return 0;
        }
		ft_iada(av[1], av[2]);
    }
}
