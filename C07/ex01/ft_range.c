/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:46:55 by nodellao          #+#    #+#             */
/*   Updated: 2026/09/01 21:47:39 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rang;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	rang = malloc((sizeof(int) * (max - min)));
	if (!rang)
		return (NULL);
	while (min < max)
	{
		rang[i] = min;
		min++;
		i++;
	}
	return (rang);
}
