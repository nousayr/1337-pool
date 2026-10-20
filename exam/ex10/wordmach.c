#include <unistd.h>
#include <stdio.h>
void wordmach(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    char n;
    while (str2[j])
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else if (str1[i] != str2[j])
        {
            j++;
        }
    }
    if (str1[i] == '\0')
    {
        printf("%s", str1);
    }
    
}

int main()
{
    wordmach("bc", "abbcd");
}