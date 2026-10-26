/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:14:14 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:14:54 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*creator;
	t_list	*new_list;
	t_list	*first_list;

	if (!f || !lst)
		return (NULL);
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
