/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:12:39 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/26 11:13:16 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char n = '5';
// 	printf("%zu", strlen(&n));
// 	// printf("%zu", strlen(NULL));
// }