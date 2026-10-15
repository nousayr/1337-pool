/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:36:24 by nodellao          #+#    #+#             */
/*   Updated: 2026/10/14 21:41:28 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void	*ft_memset(void *ptr, int x, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);

#endif
