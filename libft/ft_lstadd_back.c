#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst && lst->next)
    {
        lst = lst->next;
    }
    return lst;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;
    if (!lst || !new)
        return ;
    ;
    if (*lst)
    {
        node = ft_lstlast(*lst);
        node->next = new;
    }
    else
        *lst = new;   
}