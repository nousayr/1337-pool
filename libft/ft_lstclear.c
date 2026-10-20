#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst)
        return ;
    t_list *new = *lst;
    t_list *site;
    while (new)
    {
        if(del && new->content)
            del(new->content);
        site = new;
        new = new->next;
        free(site);
    }
    *lst = NULL;
}