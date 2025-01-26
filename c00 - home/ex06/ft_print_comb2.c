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
                if (d != '9')
                {
                    d++;
                    print_comb(&a,&b,&c,&d);
                }
                else
                {
                    c++;
                    d = '0';
                    print_comb(&a,&b,&c,&d);
                }
            }
        if (b != '9')
        {
            b++;
            print_comb(&a,&b,&c,&d);
        }
        else
        {
            a++;
            b = '0';
            print_comb(&a,&b,&c,&d);
        }
    }     
}

int main(void)
{
    ft_print_comb2();
}