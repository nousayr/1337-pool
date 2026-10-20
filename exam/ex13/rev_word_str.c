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

void rev_word_str(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;
    int end;
    int save = 0;
    while (i >= 0)
    {
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
        if(save == 1 && start < end)
        {
            write(1, " ", 1);
        }
        save = 1;
        ft_putstr(str, start, end);
    }
}

int main()
{
    rev_word_str("   hello ahmad kif rak   ");
}