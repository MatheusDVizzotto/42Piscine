#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    //ft_putchar('a');

    int n = 42;
    char *t;

    *t = &n + '0';
    write(1, &t, sizeof(n));
}