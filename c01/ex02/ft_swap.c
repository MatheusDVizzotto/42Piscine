#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    *a = 10;
    *b = 15;
}

int main(void)
{
    int a;
    int b;
    char ac[2];
    char bc[2];

    ft_swap(&a, &b);
    ac[0] = a / 10 + '0';
    ac[1] = a % 10 + '0';
    bc[0] = b / 10 + '0';
    bc[1] = b % 10 + '0';
    write(1, &ac, 2);
    write(1, ", ", 2);
    write(1, &bc, 2);
}
