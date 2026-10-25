#include <unistd.h>

void ft_azdin(char *str)
{
    int i = 0;
    int start;
    int end;
    int hin = 0;
    int n = 0;
    while (str[i])
    {
        while (str[i] == ' ')
        {
            i++;
        }
        start = i;
        while (str[i] != ' ' && str[i])
        {
            i++;
        }
        end = i;
        if (start < end)
        {
            if (hin < (end - start))
            {
                hin = end - start;
                n = start;
            }
        }
    }
    i = 0;
    while (i < hin)
    {
        write(1, &str[n], 1);
        n++;
        i++;
    }
}

int main(int ac, char **av)
{
    ft_azdin("     abc   lkjh afsdasf          22233232323232           ");
}
