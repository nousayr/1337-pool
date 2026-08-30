/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:12:17 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/27 20:55:07 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	j = 1;
	i = 0;
	(void)ac;
	while (av[i] != NULL)
		i++;
	i--;
	while (j < i)
	{
		tmp = av[i];
		av[i] = av[j];
		av[j] = tmp;
		j++;
		i--;
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
