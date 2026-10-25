#include <unistd.h>

int ft_chek_kbl(char *str, char c, int max)
{
    int i = 0;
    while (i < max)
    {
        if (c == str[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_check_kolxi(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (c == str[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void uni(char *str1, char *str2)
{
    int i = 0;
    while (str1[i])
    {
        if (ft_chek_kbl(str1, str1[i], i))
        {
            write(1, &str1[i], 1);
        }
        i++;
    }
    i = 0;
    while (str2[i])
    {
        if (ft_chek_kbl(str2, str2[i], i) && ft_check_kolxi(str1, str2[i]))
        {
            write(1, &str2[i], 1);
        }
        i++;
    }    
}

int main()
{
    uni("zpadinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
}