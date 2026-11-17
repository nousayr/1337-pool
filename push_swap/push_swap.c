#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
    node->prev = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		node = ft_lstlast(*lst);
		node->next = new;
        new->prev = node;
	}
	else
	{
		*lst = new;
	}
}

void ft_swap(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int ac, char **av)
{
    int i = 1;
	t_list *a = NULL;
	t_list *b = NULL;
    while (av[i])
    {
        ft_lstadd_back(&a, ft_lstnew(av[i]));
		i++;
	}

}