#include <unistd.h>

void    ft_print_numbers(void)
{
    char    numbers;

    numbers = '0';
    while (numbers <= '9')
    {
        write(1, &numbers, 1);
        numbers ++;
    }
    
}

int main(void)
{
    ft_print_numbers();
}