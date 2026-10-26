/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:04:48 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/26 11:05:48 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (i < dstsize - 1 && *src && j < src_len)
	{
		dst[i] = *src++;
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int    main(void)
// {
//     #undef strlcat
//     char    dst[120] = "abc";
//     ft_strlcat(dst, dst, 120);
//     printf("Return: %s\n", dst);
//     return (0);
// }