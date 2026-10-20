#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_str(char *str, int start, int end)
{
    ft_putchar(str[start]);
    start++;
    while (start < end)
    {
        ft_putchar('*');
        start++;
    }
    ft_putchar(str[start]);
}
void ft_lajb(char *str)
{
    int i = 0;
    int start;
    int end;
    while (str[i])
    {
        while (str[i] == ' ')
        {
            ft_putchar(' ');
            i++;
        }
        start = i;
        while (str[i] != ' ' && str[i] != '\0')
        {
            i++;
        }
        end = i - 1;
        if (start < end)
        {
            ft_str(str, start, end);
        }
    }
}

int main()
{
    char str[] = "hello ahmad kif rak";
    ft_lajb(str);
}