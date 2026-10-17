/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niro <niro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 02:57:25 by niro              #+#    #+#             */
/*   Updated: 2026/10/17 14:25:07 by niro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strjoin(char **str, char const *s, int start, int end)
{
	int	i;

	i = 0;
	*str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return ;
	while (start < end)
	{
		(*str)[i] = s[start];
		i++;
		start++;
	}
	(*str)[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		len_strs;
	sigset_t		start;
	char	**str;

	i = 0;
	len_strs = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			len_strs++;
	}
	str = malloc(sizeof(char *) * (len_strs + 1));
	if (!str)
		return (NULL);
	i = 0;
	len_strs = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			ft_strjoin(&str[len_strs], s, start, i);
			len_strs++;
		}
	}
	str[len_strs] = NULL;
	return (str);
}

// int main()
// {
// 	char **str = ft_split("hello ahmade kif   rak", ' ');
// 	printf("%s", str[0]);
// }