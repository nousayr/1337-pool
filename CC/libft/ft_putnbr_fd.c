#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    char c;

    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
        c = nb + '0';
        write(fd, &c, 1);
    }
}