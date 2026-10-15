/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:57:25 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/13 12:57:25 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        *((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
    }
    return(dst);
}
