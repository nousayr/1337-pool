/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:47:55 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/01 21:48:37 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupmallo;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dupmallo = malloc((sizeof(char) * i) + 1);
	dupmallo = malloc((sizeof(char) * i) + 1);
	if (!dupmallo)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dupmallo[i] = src[i];
		i++;
	}
	dupmallo[i] = '\0';
	return (dupmallo);
}
