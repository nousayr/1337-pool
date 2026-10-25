#include <unistd.h>
#include <stdio.h>


int main(int ac, char **av)
{
    int a = 2147483647;
    long c = a;
    long b = 0;
    while (a > 0)
    {
        b *= 10;
        b += a % 10;
        a /= 10;
    }
    if (b == c)
    {
        printf("%i", 1);
    }
    else if (b != c)
    {
        printf("%i", 0);
    } 
}