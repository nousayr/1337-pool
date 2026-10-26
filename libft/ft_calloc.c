/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 21:12:48 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/26 12:13:01 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	len;

	if ((count * size) / size != count)
	{
		return (NULL);
	}
	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	len = count * size;
	str = malloc(len);
	if (!str)
		return (NULL);
	return (ft_memset(str, 0, len));
}

// int main()
// {
//     char *str;
//     str = ft_calloc(5, 1);
//     // str = calloc(5, 1);
//     printf("%p\n", str);
//     printf("%i", str[43551]);
//     printf("%s\n", str);
// }