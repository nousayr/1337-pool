/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:40:12 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:41:14 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)x;
		i++;
	}
	return ((void *)ptr);
}
// // 00000000 00000000 00000000 00000001
// // 00000000
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[5];
// 	s[4] = '\0';
// 	memset(s, 325415, 4);
// 	printf("%s", s);
// }
