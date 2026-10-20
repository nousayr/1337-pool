#include <unistd.h>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] == 'a')
            {
                write(1, "a", 1);
                return 0;
            }
            j++;
        }
        i++;
    }
}