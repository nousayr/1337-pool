#include <unistd.h>

void ft_putcahr(char c)
{
    write(1, &c, 1);
}

void print_addr_inhex(unsigned long c)
{
    char *base = "0123456789ABCDEF";
    char printin[16];
    int i = 15;
    while (i >= 0)
    {
        printin[i] = base[c / 16];
        c /= 16;
        i--;
    }
    write(1, printin, 16);
    ft_putcahr(':');
    ft_putcahr(' ');
}

void print_char_inhex(unsigned char *ptr)
{
    int i = 0;
    char *base = "0123456789ABCDEF";
    while (i < 16)
    {
        ft_putcahr(base[ptr[i] / 16]);
        ft_putcahr(base[ptr[i] % 16]);
        if (i % 2 != 0)
        {
            ft_putcahr(' ');
        }
        i++;
    }
}

void print_non_printable(unsigned char *ptr)
{
    int i = 0 ;
    while (i < 16)
    {
        if (ptr[i] >= 32 && ptr[i] < 127)
        {
            ft_putcahr(ptr[i]);
        }
        else
        {
            ft_putcahr('.');
        }
    }
    ft_putcahr('\n');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i = 0;
    unsigned char *ptr = (unsigned char *)addr;
    while (i < size)
    {
        if (i % 16 == 0)
        {
            print_addr_inhex((unsigned long)(ptr + i));
            print_char_inhex(ptr + i);
            print_non_printable(ptr + i);
        }
        i++;
    }
    return ptr;
}

int main()
{
    char c = '5';
    print_addr_inhex((unsigned long)(&c));
}
