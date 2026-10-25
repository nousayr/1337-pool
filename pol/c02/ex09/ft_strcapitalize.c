/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 14:45:14 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/19 15:53:18 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_lowercas(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	finana;

	i = 0;
	finana = 1;
	ft_lowercas(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (finana == 1)
				str[i] -= 32;
			finana = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			finana = 0;
		else
			finana = 1;
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	printf("%s", ft_strcapitalize(str));
// }