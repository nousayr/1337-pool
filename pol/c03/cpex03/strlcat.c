#include <unistd.h>

int main()
{
    int n = '0';
    write(1, &n, 1);
}