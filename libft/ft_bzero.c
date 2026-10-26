/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 21:06:46 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/25 21:09:42 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str++ = 0;
		n--;
	}
}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[5];
//    str[4] = '\0';
//    str[0] = 'a';
//    str[1] = 'a';
//    str[2] = 'a';
//    str[3] = 'a';
//    // ft_bzero(NULL, 6);
//    bzero(NULL, 7);
//
//    int i = 0;
//    while (i < 7)
//    {
//        printf("%i ", str[i]);
//        i++;
//    }
//}