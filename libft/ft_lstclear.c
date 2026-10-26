/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:09:08 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:10:48 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*site;

	if (!lst)
		return ;
	new = *lst;
	while (new)
	{
		if (del && new->content)
			del(new->content);
		site = new;
		new = new->next;
		free(site);
	}
	*lst = NULL;
}
