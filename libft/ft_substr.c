/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:41:12 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/18 15:58:27 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t len_s;

    if(!s)
        return(NULL);
    i = 0;
    len_s = ft_strlen(s);
    if (start >= len_s)
    {
        str = malloc(1);
        if(!str)
            return(NULL);
        str[0] = '\0';
        return (str);
    }
    str = malloc(len + 1);
    if(!str)
        return (NULL);
    while (i < len && s[start + i])
    {
        str[i++] = s[start + i++];
    }
    str[i] = '\0';
    return (str);
}
#include <stdio.h>
int main()
{
    char *str = ft_substr(NULL, 2, 0);
    printf("%p", str);
}