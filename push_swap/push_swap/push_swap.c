#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

int	ft_memcmp(const void *s1, const void *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i])
	{
		if (*(str1 + i) != *(str2 + i))
		{
			return (*(str1 + i) - *(str2 + i));
		}
		i++;
	}
	return (0);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
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

t_list	*ft_first_node(t_list **a)
{
	t_list *save;

	save = *a;
	(*a) = (*a)->next;
	(*a)->prev = NULL;
	save->next = NULL;
	save->prev = NULL;
	return save;
}

void ft_swap(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void *ft_min_element(t_list *a)
{
	void *str;

	str = a->content;
    while (a)
    {
        if (ft_memcmp(str, a->content) > 0)
        {
            str = a->content;
        }
        a = a->next;
    }
    return str;
}

void rotate_stack(t_list **a)
{
	t_list *last;
	t_list *save;

	save = *a;
	last = ft_lstlast(*a);
	*a = save->next;
	(*a)->prev = NULL;
	last->next = save;
	save->prev = last;
	save->next = NULL;
}

// int main(int ac, char **av)
// {
//     int i = 1;
// 	t_list *a = NULL;
// 	t_list *b = NULL;
// 	void *save;
// 	void *min;
//     while (av[i] != NULL)
//     {
//         ft_lstadd_back(&a, ft_lstnew(av[i]));
// 		i++;
// 	}
// 	save = a->content;
// 	min = ft_min_element(a);
// 	while (a)
// 	{
// 		while (ft_memcmp(save, min) != 0)
// 		{
// 			save = a->content;
// 			rotate_stack(&a);
// 		}
// 		ft_lstadd_back(&b, a);
// 		a = a->next;
// 		a->prev = NULL;
// 	}
// 	printf("%s", (char *)b->content);
// }

int main(int ac, char **av)
{
    int i = 1;
	t_list *a = NULL;
	t_list *b = NULL;
	void *save;
	void *min;
    while (av[i] != NULL)
    {
        ft_lstadd_back(&a, ft_lstnew(av[i]));
		i++;
	}
	t_list *n = ft_first_node(&a);
	printf("%s\n", n->next);
	printf("%s\n", n->prev);
}