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

void ft_putstr(char *str, int start, int end)
{
    while (start <= end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

void ft_mana3raf(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;
    int end;
    int max;
    int save = 0;
    while (i >= 0 && str[i] == ' ')
    {
        i--;
    }
    end = i;
    while (i >= 0 && str[i] != ' ')
    {
        i--;
    }
    start = i + 1;
    ft_putstr(str, start, end);
    i = 0;
    max = start;
    while (i < max - 1)
    {
        write(1, " ", 1);
        while (i < max - 1 && str[i] == ' ')
        {
            i++;
        }
        start = i;
        while (i < max - 1 && str[i] != ' ')
        {
            i++;
        }
        end = i;
        ft_putstr(str, start, end - 1);
    }
    
}

int main()
{
    ft_mana3raf("   hello ahmad kif rak   ");
}