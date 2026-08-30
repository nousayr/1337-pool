/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:38:15 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/25 20:44:30 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(str[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	ft_check_pos(char *bord, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (bord[i] == row
			|| bord[i] - i == row - col
			|| bord[i] + i == row + col)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

int	ft_queens(int col, char *board, int *n)
{
	int	row;

	if (col == 10)
	{
		*n = *n + 1;
		ft_putstr(board);
	}
	else
	{
		row = 0;
		while (row < 10)
		{
			if (ft_check_pos(board, row, col))
			{
				board[col] = row;
				ft_queens(col + 1, board, n);
			}
			row++;
		}
	}
	return (*n);
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		n;
	int		col;

	n = 0;
	col = 0;
	while (col < 10)
	{
		board[col] = 0;
		col++;
	}
	col = 0;
	ft_queens(col, board, &n);
	return (n);
}
// #include <stdio.h>
// int main()
// {
//     printf("%i", ft_ten_queens_puzzle());
// }