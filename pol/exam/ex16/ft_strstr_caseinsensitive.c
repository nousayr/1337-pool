char *ft_strstr_caseinsensitive(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    char c;
    while (str[i])
    {     
        while (str[i + j] == to_find[j] || str[i + j] + 32 == to_find[j] || str[i + j] - 32 == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return &str[i];
        }
        i++;
    }
    return str;
}
#include <stdio.h>
int main()
{
    printf("%s", ft_strstr_caseinsensitive("opiuabCoi", "Abc"));
}