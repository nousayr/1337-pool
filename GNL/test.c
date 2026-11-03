#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

// int main()
// {
//     char *str = malloc(50);
//     int fd = open("foo.txt", O_RDONLY);
//     if (fd < 0)
//         return (1);
//     int n = read(fd, str, 50);
//     printf("%i\n", n);
//     int i = 0;
//     while (i < n)
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     free(str);
// }

// void ft_putstr(char *str, int len)
// {
//     int i = 0;
//     while (i < len)
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
// }

// int main()
// {
//     char *str = malloc(20);
//     int fd = open("foo.txt", O_RDONLY);
//     if (fd < 0)
//         return 1;
//     int len = 20;
//     while (len > 0)
//     {
//         len = read(fd, str, 20);
//         ft_putstr(str, len);
//     }
//     free(str);
//     return (0);
// }


// int main()
// {
//     int fd1 = open("foo.txt", O_RDONLY);
//     int fd2 = open("foo.txt", O_RDONLY);
//     char c1, c2;
//     read(fd1, &c1, 1);
//     read(fd2, &c2, 1);
//     printf("%c\n%c", c1, c2);
// }

// int main()
// {
//     char *str = malloc(BUFFER_SIZE);
//     int fd = open("foo.txt", O_RDONLY);
//     read(0, str, BUFFER_SIZE);
//     printf("%s", str);
// }
void ft_check()
{
    static int n = 0;
    n++;
    printf("%i", n);
}
int main()
{
    int i = 0;
    while (i < 5)
    {
        ft_check();
        i++;
    }
}