/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:17:29 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/26 21:22:48 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char *str1, char *str2)
{
	char	*tmp;

	tmp = str1;
	str1 = str2;
	str2 = tmp;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 0;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
				ft_swap(av[i], av[i + 1]);
			i++;
		}
		j++;
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
