#include <stdio.h>

int l9iwda(int *str, int size)
{
    int i = 1;
    int n = str[i];
    int save = 0;
    while (i < size)
    {
        if (n + str[i] >= save)
        {
            save = n + str[i];
        }
        else
        {
            n = 0;
            save = 0;
        }
        i++;
    }
    printf("%i", n);
    return save;
}


int main()
{
    int str[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    l9iwda(str, 9);
}