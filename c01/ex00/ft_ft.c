#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int n = 0;
    char nc[2];

    ft_ft(&n);
    nc[0] = n / 10 + '0';
    nc[1] = n % 10 + '0';
    write(1, &nc, 2);
}