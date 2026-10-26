/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:18:20 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:18:38 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char str[5];
//     str[4] = '\0';
//     printf("%s\n", memchr(str, -1, 4));
//     // printf("%s\n", ft_memchr(str, -1, 4));
// }