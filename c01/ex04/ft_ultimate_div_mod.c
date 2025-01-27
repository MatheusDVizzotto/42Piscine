#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void)
{
    int a;
    int b;

    char div_c[2];
    char mod_c[2];

    a = 100;
    b = 9;
    ft_ultimate_div_mod(&a, &b);

    div_c[0] = a / 10 + '0';
    div_c[1] = a % 10 + '0';
    mod_c[0] = b / 10 + '0';
    mod_c[1] = b % 10 + '0';
    write(1, &div_c, 2);
    write(1, ", ", 2);
    write(1, &mod_c, 2);
}