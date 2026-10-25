#include <stdio.h>
#include <unistd.h>

void ft_perme(char c, char *board, int i, int size, char max)
{
    if (i == size)
    {
        printf("%s", board);
    }
    else
    {
        while (c <= max)
        {
            board[i] = c;
            ft_perme(c + 1, board, size, i + 1, max);
            c++;
        }
    }
}

void ft_lmot(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    char board[i];
    ft_perme(str[0], board, 0, i, str[i - 1]);
}
int main(int ac, char **av)
{
    
    ft_lmot("abcde");
}