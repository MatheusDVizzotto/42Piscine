#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    char test[6];

    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i++],1);
    }
    
}

int main(void)
{
    ft_putstr("standard output");
}