#include <unistd.h>
#include <stdio.h>

void ft_rev_putstr(char *str, int start, int end)
{
    while (start <= end)
    {
        write(1, &str[start], 1);
        start++;
    }
}
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

void ft_kolxi(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;
    int end;
    while (i >= 0)
    {
        while (str[i] == ' ')
        {
            write(1, &str[i], 1);
            i--;
        }
        end = i;
        while (!(str[i] == ' ') && str[i])
        {
            i--;
        }
        start = i + 1;
        if (start < end)
        {
            ft_rev_putstr(str, start, end);
        }
    }
}

int main()
{
    ft_kolxi("   koka     soso     nono     ");
}