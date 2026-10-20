#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putboard(int *board)
{
    int i = 0;
    while (i < 10)
    {
        printf("%i", board[i]);
        i++;
    }
    ft_putchar('\n');
}

int ft_check_pos(int *board, int col, int row)
{
    int i = 0;
    while (i < col)
    {
        if (board[i] == row
            || board[i] - i == row - col
            || board[i] + i == row + col)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void ft_rec_ten(int *board, int col, int *n)
{
    int row;
    if (col == 10)
    {
        *n = *n + 1;
        ft_putboard(board);
    }
    else
    {
        row = 0;
        while (row <= 9)
        {
            if (ft_check_pos(board, col, row))
            {
                board[col] = row;
                ft_rec_ten(board, col + 1, n);
            }
            row++;
        }
    }
}

int ft_ten_qeun()
{
    int board[10];
    int i = 0;
    int n = 0;
    while (i < 10)
    {
        board[i] = -1;
        i++;
    }
    ft_rec_ten(board, 0, &n);
    return n;
}

int main()
{
    printf("%i", ft_ten_qeun());
    return 0;
}
