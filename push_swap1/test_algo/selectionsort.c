#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void ft_swap(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

char *max_element(char *arr, int i)
{
    char *c = &arr[i];
    while (arr[i])
    {
        if (*c > arr[i])
        {
            c = &arr[i];
        }
        i++;
    }
    return c;
}

void selectionsort(char *arr)
{
    int i = 0;
    int j = 0;
    char *min = arr;
    while (arr[i])
    {
        ft_swap(max_element(arr, i), &arr[i]);
        i++;
    }
}

int main()
{
    char str[] = {'1', '2', '4', '3', '7', '5', '9', '6', '\0'};
    selectionsort(str);
    printf("%s", str);
}

// int main()
// {
//     char str[] = {'1', '5', '2', '4', '0', '\0'};
//     selectionsort(str);
//     printf("%s", str);
// }