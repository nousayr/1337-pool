#include <stdio.h>
#include "push_swap.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long		val;

	i = 0;
	sign = 1;
	val = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (sign * (int)val);
}


void *ft_min_element(t_list *a)
{
	void *str;

	str = a->content;
    while (a)
    {
        if (ft_atoi(str) > ft_atoi(a->content))
            str = a->content;
        a = a->next;
    }
    return str;
}

t_list *first_node(t_list **a)
{
	t_list *save;

	if (!a || !(*a))
		return NULL;
	save = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	save->next = NULL;
	save->prev = NULL;
	return save;
}

void rotate_stack(t_list **a)
{
	t_list *last;
	t_list *save;

	if (!a || !(*a))
		return ;
	save = first_node(a);
	last = ft_lstlast(*a);
	last->next = save;
	save->prev = last;
	save->next = NULL;
}

void selectionsort(char **argv)
{
    int i = 1;
	t_list *a = NULL;
	t_list *b = NULL;
	void *min;
    while (argv[i])
    {
        ft_lstadd_back(&a, ft_lstnew(argv[i]));
		i++;
	}
	while (a)
	{
		min = ft_min_element(a);
		while (ft_atoi(min) != ft_atoi(a->content))
		{
			rotate_stack(&a);
			write(1, "ra\n", 3);
		}
		ft_lstadd_front(&b, first_node(&a));
		write(1, "pb\n", 3);
	}
	while (b)
	{
		ft_lstadd_front(&a, first_node(&b));
		write(1, "pa\n", 3);
	}
}

void pased_index(t_list *a)
{
	t_list *save;
	t_list *tmp;
	
	save = a;
	while (a)
	{
		tmp = save;
		while (tmp)
		{
			if (ft_atoi(a->content) > ft_atoi(tmp->content))
			{
				(a->index)++;
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
	
}

void radixsort(char **argv)
{
    int i = 1;
	t_list *a = NULL;
	t_list *b = NULL;
	t_list *save;
	int n;

	n = 2;
    while (argv[i])
    {
        ft_lstadd_back(&a, ft_lstnew(argv[i]));
		i++;
	}
	pased_index(a);
	while (a)
	{
		save = a;
		while (a)
		{
			if ((a->index % n) == 0)
			{
				ft_lstadd_front(&b, a);
				save = save->next;
			}
			a = a->next;
		}
		a = save;
		a = a->next;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		radixsort(av);
	}
	return 0;
}
