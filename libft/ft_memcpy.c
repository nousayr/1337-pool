/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:57:25 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/17 13:10:02 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;
    if (!dst && !src)
        return (NULL);
    while (i < n)
    {
        *((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
    }
    return(dst);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[2];
    char str2[2];
    char str3[2];
    char str4[2];

    str1[1] = '\0';
    str2[1] = '\0';
    str3[1] = '\0';
    str4[1] = '\0';
    
    // printf("%s\n", memcpy(NULL, NULL, 0));
    printf("%s", ft_memcpy(str1, str3, 0));
}