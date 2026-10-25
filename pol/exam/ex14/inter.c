#include <unistd.h>

int main(int ac, char **av)
{
    char str[256] = {0};
    int i = 0;
    while (av[2][i])
    {
        str[av[2][i]] = 1;
        i++;
    }
    i = 0;
    while (av[1][i])
    {
        if (str[av[1][i]] == 1)
        {
            write(1, &av[1][i], 1);
            str[av[1][i]] = 0;
        }
        i++;
    }
    write(1, "\n", 1);
}