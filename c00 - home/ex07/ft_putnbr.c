#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == INT_MIN)
    {
        write(1, "-", 1);
        ft_putnbr(-(nb / 10));
        ft_putnbr(-(nb % 10));
    }
    if (nb < 0 && nb != INT_MIN)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb < 10 && nb != INT_MIN)
        ft_putchar(nb + '0');
    else if (nb > 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(void)
{
    ft_putnbr(-2147483648);
}