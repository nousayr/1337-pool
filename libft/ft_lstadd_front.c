/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:08:16 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:08:17 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list  *a = ft_lstnew("A");
//     t_list  *b = ft_lstnew("B");
//     t_list  *c = ft_lstnew("C");
//     printf("%s\n", a->content);
//     printf("%s\n", b->content);
//     printf("%s\n", c->content);
//     printf("\n");
//     ft_lstadd_front(&a, b);
//     printf("%p\n", a->next->next);
// }