#include <stdio.h>

void insertionSort(char *arr)
{
    int i = 0;
    int j = 0;
    char tmp;
    while (arr[i])
    {
        j = 0;
        while (arr[j])
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    char str[] = {'3', '5', '4', '7', '\0'};
    insertionSort(str);
    printf("%s", str);
}