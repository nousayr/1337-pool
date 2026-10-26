/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:19:49 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:35:14 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(str1 + i) != *(str2 + i))
		{
			return (*(str1 + i) - *(str2 + i));
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[2];
//     char str2[2];
//     char str3[2];
//     char str4[2];

//     str1[1] = '\0';
//     str2[1] = '\0';
//     str3[1] = '\0';
//     str4[1] = '\0';

//     str1[0] = 5;
//     str2[0] = 5;
//     str3[0] = 0;
//     str4[0] = 0;
//     // printf("%i\n", memcmp(NULL, NULL, 2));
//     printf("%i", ft_memcmp(NULL, NULL, 2));
// }