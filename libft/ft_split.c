/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:27:25 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/26 12:15:22 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		start = i;
		while (s[i] != c && s[i])
		{
			i++;
		}
		if (i > start)
		{
			count++;
		}
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		return (str[0] = '\0', str);
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_free_all(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_fill(char const *s, char c, char **str)
{
	size_t	i;
	size_t	save;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		save = i;
		while (s[i] != c && s[i])
			i++;
		if (i > save)
		{
			str[len] = ft_substr(s, save, i - save);
			if (!str[len])
				return (ft_free_all(str, len), NULL);
			len++;
		}
	}
	str[len] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	return (ft_fill(s, c, str));
}
// #include <stdio.h>
// int main()
// {
// 	char **str = ft_split("    hello   ahmad kif   rak   ", ' ');
// 	printf("%s", str[2]);
// }