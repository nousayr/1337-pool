/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:16:03 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/02 18:31:46 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*topa;
	int			i;

	i = 0;
	topa = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!topa)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		topa[i].size = ft_strlen(av[i]);
		topa[i].str = av[i];
		topa[i].copy = malloc(topa[i].size + 1);
		if (!topa[i].copy)
		{
			while (i > 0)
				free(topa[--i].copy);
			free(topa);
			return (NULL);
		}
		ft_strcpy(topa[i].copy, av[i]);
		i++;
	}
	topa[i].str = NULL;
	return (topa);
}
