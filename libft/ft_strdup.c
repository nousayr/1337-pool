/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:49:01 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 23:49:51 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len + 1);
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%s", strdup(""));
//     // printf("%s", ft_strdup(""));
// }
