/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 21:56:43 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 21:58:43 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	len_nbr(int nbr)
{
	int		len;
	long	n;

	len = 0;
	n = (long)nbr;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	i = len_nbr(n);
	nbr = (long)n;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[i - 1] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}
// #include <string.h>
// int main()
// {
// 	char *str = ft_itoa(2147483647);
// 	printf("%s\n", str);
// 	printf("%ld", strlen(str));
// }