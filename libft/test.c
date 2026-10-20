#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *creator;
    t_list *new_list;
    t_list *first_list;

    if (!f || !lst)
        return NULL;
    creator = ft_lstnew(f(lst->content));
    if (!creator)
        return (NULL);
    new_list = creator;
    first_list = new_list;
    lst = lst->next;
    while (lst)
    {
        creator = ft_lstnew(f(lst->content));
        if (!creator)
        {
            ft_lstclear(&first_list, del);
            return (NULL);
        }
        new_list->next = creator;
        new_list = new_list->next;
        lst = lst->next;
    }
    return (first_list);
}
#include <stdio.h>
int main()
{
    long n = 21474836489;
    int i = (int )n;
    printf("%d", i);
}
