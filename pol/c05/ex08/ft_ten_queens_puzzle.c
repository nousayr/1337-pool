/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodellao <nodellao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:38:15 by nodellao          #+#    #+#             */
/*   Updated: 2026/08/29 16:36:47 by nodellao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_nbr(int n)
{
	if (n > 9)
	{
		ft_put_nbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_putstr(char *str, int in)
{
	int	i;

	i = 0;
	while (i < in)
	{
		ft_put_nbr(str[i]);
		ft_putchar(' ');
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

int	ft_queens(int col, char *board, int *n, int in)
{
	int	row;

	if (col == in)
	{
		*n = *n + 1;
		ft_putstr(board, in);
	}
	else
	{
		row = 0;
		while (row < in)
		{
			if (ft_check_pos(board, row, col))
			{
				board[col] = row;
				ft_queens(col + 1, board, n, in);
			}
			row++;
		}
	}
	return (*n);
}

int	ft_ten_queens_puzzle(int in)
{
	char	board[in];
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
	ft_queens(col, board, &n, in - 1);
	return (n);
}
int main()
{
    printf("%i", ft_ten_queens_puzzle(20));
}