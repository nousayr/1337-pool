#include <stdio.h>
#include <stdlib.h>

char ft_ret(char c)
{
    printf("%c\n", c);
    return c;
}

int main() {
    char x = 'c';
    
    char (*func)(char);

    func = &ft_ret;
    char st = func(x);
    printf("%c\n", st);
    return 0;
}