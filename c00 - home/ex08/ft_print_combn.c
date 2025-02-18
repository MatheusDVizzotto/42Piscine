#include <unistd.h>

void	generate_outputs(char *output, int output_len, int max_len)
{
	char	digit;

	if (output_len > 0)
		digit = output[output_len - 1] + 1;
	else
		digit = '0';
	if (output_len == max_len)
	{
		write(1, output, output_len);
		if (output[0] != 10 - max_len + '0')
			write(1, ", ", 2);
		return ;
	}
	while (digit <= '9')
	{
		output[output_len] = digit++;
		generate_outputs(output, output_len + 1, max_len);
	}
}

void	ft_print_combn(int n)
{
	char	output[10];
	int		i;

	i = 0;
	while (i < 10)
		output[i++] = '\0';
	generate_outputs(output, 0, n);
}

int main(void)
{
    ft_print_combn(5);
}