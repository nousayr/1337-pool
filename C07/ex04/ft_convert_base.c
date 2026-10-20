/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 20:44:05 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/20 15:52:28 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_chack_base(char *base);

int	ft_atoi_base(char *str, char *base);

int	len_nbr(long nbr, int len_base)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= len_base;
	}
	return (len);
}

char	*ft_itoa_base(long nbr, char *base_to)
{
	int		len_to;
	int		len_nb;
	int		i;
	char	*str_nb;

	len_to = ft_strlen(base_to);
	len_nb = len_nbr(nbr, len_to);
	i = len_nb - 1;
	str_nb = malloc(sizeof(char) * (len_nb + 1));
	if (!str_nb)
	{
		return (NULL);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		str_nb[0] = '-';
	}
	while (nbr > 0)
	{
		str_nb[i--] = base_to[nbr % len_to];
		nbr /= len_to;
	}
	str_nb[len_nb] = '\0';
	return (str_nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*str;

	if (!ft_chack_base(base_from) || !ft_chack_base(base_to))
		return (NULL);
	nb = (long)ft_atoi_base(nbr, base_from);
	if (nb != 0)
	{
		str = ft_itoa_base(nb, base_to);
	}
	else
	{
		str = malloc(sizeof(char) * 2);
		if (!str)
		{
			return (NULL);
		}
		str[0] = base_to[0];
		str[1] = '\0';
	}
	return (str);
}

#include <stdio.h>
int main()
{
	printf("%s", ft_convert_base("21474836475", "0123456789", "01"));
}
