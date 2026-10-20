/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:39:50 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/01 21:40:40 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_check(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_chack_base(char *base)
{
	int	len_base;
	int	i;

	len_base = ft_strlen(base);
	i = 0;
	if (len_base < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| ft_check(base, base[i], i) || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_ret_index(char c, char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sin;
	int	num;
	int	len_base;

	if (!ft_chack_base(base))
		return (0);
	i = 0;
	sin = 1;
	num = 0;
	len_base = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sin *= -1;
		i++;
	}
	while (ft_ret_index(str[i], base) >= 0)
	{
		num *= len_base;
		num += ft_ret_index(str[i++], base);
	}
	return (sin * num);
}
