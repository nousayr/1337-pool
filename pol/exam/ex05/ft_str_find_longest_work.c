#include <stdio.h>

void ft_str_find_longest_work(char *str)
{
    int i = 0;
    int start;
    int end;
    int save = 0;
    while (str[i])
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) && str[i])
        {
            i++;
        }
        start = i;
        while (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) && str[i])
        {
            i++;
        }
        end = i;
        if (save <= end - start)
        {
            save = end - start;
        }
    }
    printf("%i", save);
}

int main()
{
    ft_str_find_longest_work("    hello word gjl+agjs   ");
}