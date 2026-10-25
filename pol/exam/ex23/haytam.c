#include <unistd.h>

int ft_check(char *str, char c)
{
    int i = 0;
    int count;
    while (str[i])
    {
        if (c == str[i])
        {
            count++;
        }
        i++;
    }
    return count;
}

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    int n = 0;
    char save;
    while (av[i][j])
    {
        
    }
    
}