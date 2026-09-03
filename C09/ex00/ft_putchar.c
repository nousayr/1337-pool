#include <unistd.h>
#include <errno.h> 

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putstr("gcc ft_print_alphabet.c\n");

}