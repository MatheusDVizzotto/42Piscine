/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:40:07 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/03 09:08:59 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		p;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			p = str[i] / 16;
			p = hex[p];
			write(1, &p, 1);
			p = str[i] % 16;
			p = hex[p];
			write(1, &p, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int main()
{
    char test[] = "Coucou\ntu vas bien ?";
	int i = 0;

	ft_putstr_non_printable(test);
}*/
