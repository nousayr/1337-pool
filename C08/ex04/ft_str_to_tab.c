#include <unistd.h>
#include <stdlib.h>
#include "ft_str_to_tab.h"

int size_len(char *str)
{
    int len;
    len = 0;
    while (str[len])
        len++;
    return (len);
}

char *copy(char *str, int size)
{
    int k;
    char *copy;
    copy = malloc(size + 1);
    if(!copy)
        return NULL;
    k = 0;
    while (k < size)
    {
        copy[k] = str[k];
        k++;
    }
    copy[k] = '\0';
    return (copy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    tab = malloc(sizeof(*tab) * (ac + 1));
    if(!tab)
        return NULL;
    int i, j;
    j = 0;
    i = 1;
    while (av[i])
    {
        tab[j].size = size_len(av[i]);
        tab[j].str = av[i];
        
        tab[j].copy = copy(tab[j].str, tab[j].size);
        if(!tab[j].copy)
            return NULL;

        i++;
        j++;
    }
    tab[j].str = NULL;
    return (tab);
}


