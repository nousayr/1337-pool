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

void ft_kolxi(char *str)
{
    int i = 0;
    int start;
    int end;
    int hin = 0;
    while (str[i])
    {
        while (str[i] == ' ')
        {
            i++;
        }
        start = i;
        while (!(str[i] == ' ') && str[i])
        {
            i++;
        }
        end = i - 1;
        if (start < end)
        {
            if (hin == 1)
                write(1, " ", 1);
            hin = 1;
            ft_rev_putstr(str, start, end);
        }
    }
}

int main()
{
    ft_kolxi("   koka     soso     nono    ");
}