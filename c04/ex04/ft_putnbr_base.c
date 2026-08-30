/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 22:29:13 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/23 18:19:40 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rec_nbr_base(long nbr, int len_base, char *base)
{
	if (nbr >= len_base)
		rec_nbr_base(nbr / len_base, len_base, base);
	ft_putchar(base[nbr % len_base]);
}

int	ft_check(char *str, char c, int i)
{
	while (i >= 0)
	{
		if (c == str[i])
		{
			return (1);
		}
		i--;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	nb;

	i = 0;
	nb = nbr;
	while (base[i])
	{
		if ((ft_check(base, base[i], i - 1))
			|| (base[i] == '+' || base[i] == '-'))
		{
			return ;
		}
		i++;
	}
	if (i < 2)
		return ;
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	rec_nbr_base(nb, i, base);
}
