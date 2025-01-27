#include <unistd.h>

void    print_comb(char *a, char *b, char *c, char *d)
{
    write(1, &*a, 1);
    write(1, &*b, 1);
    write(1, " ", 1);
    write(1, &*c, 1);
    write(1, &*d, 1);
    if (*a != '9' || *b != '9' || *c != '9' || *d != '9')
    {
        write(1, ", ", 2);
    }
}

void    ft_check(char *value_a, char *value_b)
{
    if (*value_b != '9')
    {
        *value_b = *value_b + 1;
    }
    else
    {
        *value_a = *value_a + 1;
        *value_b = '0';
    }
}

void    ft_print_comb2(void)
{
    char    a;
    char    b;
    char    c;
    char    d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';

    while (a != '9' || b != '9')
    {
            while (c != '9' || d != '9')
            {
                ft_check(&c,&d);
                print_comb(&a,&b,&c,&d);
            }
        ft_check(&a,&b);
        print_comb(&a,&b,&c,&d);
    }    
}

int main(void)
{
    ft_print_comb2();
}