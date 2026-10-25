/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:31:03 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/01 21:37:32 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_check(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	len_words(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && ft_check(charset, str[i]))
			i++;
		if (str[i])
			len++;
		while (!ft_check(charset, str[i]) && str[i])
			i++;
	}
	return (len);
}

void	ft_fill(char *spl, char *str, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		spl[i] = str[start];
		i++;
		start++;
	}
	spl[i] = '\0';
}

char	**ft_spli(char *str, char *charset, int start)
{
	char	**spl;
	int		i;
	int		len_word;
	int		j;

	i = 0;
	j = 0;
	len_word = len_words(str, charset);
	spl = malloc(sizeof(char *) * (len_word + 1));
	while (str[i])
	{
		while (ft_check(charset, str[i]))
			i++;
		start = i;
		while (!ft_check(charset, str[i]) && str[i])
			i++;
		if (start < i)
		{
			spl[j] = malloc(sizeof(char) * ((i - start) + 1));
			ft_fill(spl[j], str, start, i);
			j++;
		}
	}
	spl[len_word] = NULL;
	return (spl);
}

char	**ft_split(char *str, char *charset)
{
	int	start;

	start = 0;
	return (ft_spli(str, charset, start));
}

// int main()
// {
// 	char **str = ft_split("   hello ahmad ,, kif,rak   dsgdhs  ", " ,");

// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// }