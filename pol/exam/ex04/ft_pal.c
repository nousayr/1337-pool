#include <unistd.h>

void ft_pla(char *str)
{
    int i = 0;
    char save;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            {
                save = str[i] + 13;
                write(1, &save, 1);
            }
            else if (str[i] >= 'n' && str[i] <= 'z')
            {
                save = 'z' + 'n' - str[i] + 1;
                write(1, &save, 1);
            }
            else
            {
                save = 'Z' + 'N' - str[i] + 1;
                write(1, &save, 1);
            }
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main()
{
    ft_pla("alsgj alsrgjalsj ASGJLRSJG 351");
}