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

t_list *ft_lstnew(void *content)
{
    t_list *node;
    if (!content)
        return NULL;
    node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *crea;
    t_list *new_node;

    if (!lst || !f)
        return (NULL);
    
    new_list = ft_lstnew(f(lst->content));
    if (!new_list)
        return (NULL);
    
    crea = new_list;
    lst = lst->next;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        crea->next = new_node;
        crea = new_node;
        lst = lst->next;
    }
    
    return (new_list);
}