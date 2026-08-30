/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 18:04:54 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/23 18:06:10 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sine;
	int	val;

	i = 0;
	sine = 1;
	val = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sine *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += str[i] - '0';
		i++;
	}
	return (sine * val);
}
