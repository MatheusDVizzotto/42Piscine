#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int n;
    int* p;
    int** p_2;
    int*** p_3;
    int**** p_4;
    int***** p_5;
    int****** p_6;
    int******* p_7;
    int******** p_8;
    char p_p_p[2];

    n = 0;
    p = &n;
    p_2 = &p;
    p_3 = &p_2;
    p_4 = &p_3;
    p_5 = &p_4;
    p_6 = &p_5;
    p_7 = &p_6;
    p_8 = &p_7;

    ft_ultimate_ft(&p_8);
    p_p_p[0] = n / 10 + '0';
    p_p_p[1] = n % 10 + '0';
    write(1, &p_p_p, 2);
}