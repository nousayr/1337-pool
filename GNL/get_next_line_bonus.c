#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void ft_pad(char *save, char *s, int len)
{
    int i = 0;
    while (i < len)
    {
        save[i] = s[i];
        i++;
    }
}

char *get_next_line(int fd)
{
    static char *str;
    char *save;
    int i = 0;

    str = malloc(BUFFER_SIZE);
    read(fd, str, BUFFER_SIZE);
    while (str[i] && str[i] != '\n')
    {
        i++;
    }
    if (str[i] == '\n')
    {
        save = malloc(i + 1);
        ft_pad(save, str, i + 1);
    }
    

}

int main()
{
    int fd = open("foo.txt", O_RDONLY);
    char *str = get_next_line(fd);
    printf("%s", str);
}