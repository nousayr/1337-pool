#include <unistd.h>
#include <stdlib.h>
#include "ft_str_to_tab.h"

t_stock_str *ft_strs_to_tab(int ac, char **av);

void pchar(char c)
{
    write(1, &c, 1);
}

void pstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        pchar(str[i]);
        i++;
    }
}

void pnum(int n)
{
    if(n > 9)
        pnum(n / 10);
    pchar((n % 10) + '0');
}


void ft_show_tab(struct s_stock_str *par)
{
    int i;
    i = 0;
    while (par[i].str)
    {
        pstr(par[i].str);
        pchar('\n');
        pnum(par[i].size);
        pchar('\n');
        pstr(par[i].copy);
        pchar('\n');
        i++;
    }
    
}

int main(int ac, char **av)
{
    t_stock_str *tab;
    tab = ft_strs_to_tab(ac, av);
    if(!tab)
        return (1);
    ft_show_tab(tab);
    
    return (0);
}