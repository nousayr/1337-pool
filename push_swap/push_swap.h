#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    size_t index;
    struct s_list *next;
    struct s_list *prev;
}t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_atoi(const char *str);
void *ft_min_element(t_list *a);
t_list *first_node(t_list **a);
void rotate_stack(t_list **a);
void selectionsort(char **argv);
void pased_index(t_list *a);
void radixsort(char **argv);
int	ft_lstsize(t_list *lst);

#endif