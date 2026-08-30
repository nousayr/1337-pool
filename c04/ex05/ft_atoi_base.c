/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:42:42 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/25 09:06:42 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_check(char *str, char c, int i)
{
	while (i >= 0)
	{
		if (c == str[i])
			return (1);
		i--;
	}
	return (0);
}

int	ft_retnum(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_chack_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if ((ft_check(base, base[i], i - 1))
			|| (base[i] == '+' || base[i] == '-' || base[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base_2(char *str, char *base, int sin, int len)
{
	int		i;
	long	num;

	num = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sin *= -1;
		i++;
	}
	while (str[i])
	{
		if (ft_retnum(base, str[i]) == -1)
			return (num);
		num *= len;
		num += ft_retnum(base, str[i]);
		i++;
	}
	return (num * sin);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	int		sin;

	sin = 1;
	len = 0;
	if (len < 2 || ft_chack_base(base) == 0)
		return (0);
	while (base[len])
	{
		len++;
	}
	return (ft_atoi_base_2(str, base, sin, len));
}

// int main()
// {
// 	printf("%i", ft_atoi_base("120", "01"));
// }