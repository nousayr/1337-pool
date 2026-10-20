/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:43:53 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/01 21:45:31 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}

char	*ft_ret(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

void	ft_join(int size, char *str, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(str, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*str;

	count = 0;
	i = 0;
	if (size <= 0)
		return (ft_ret());
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += (ft_strlen(sep) * (size - 1));
	str = malloc((sizeof(char) * count) + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	ft_join(size, str, strs, sep);
	return (str);
}

// int main()
// {
//     char *str[] = {"hello", "ahmad", "kif", "rak"};
//     printf("%s", ft_strjoin(4, str, ", "));
// }
