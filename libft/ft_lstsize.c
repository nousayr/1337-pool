#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int len;
    
    len = 0;
    while (lst)
    {
        len++;
        lst = lst->next;
    }
    return len;
}