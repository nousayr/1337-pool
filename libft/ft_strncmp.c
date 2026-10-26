/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:16:54 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/26 11:18:00 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     printf("%zu\n", ft_strlen("hello world"));
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
//     printf("%i\n", strncmp(str1, str3, 2));
//     printf("%i", ft_strncmp(str2, str4, 2));
// }