/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:17:46 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/03 10:18:04 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
					str[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[] = "HELLO test";
	int i = 0;
	int test2;

	ft_strcapitalize(test);

	test2 = sizeof(test);

	while (i < test2)
	{
		write(1,&test[i],1);
		i++;
	}
}
*/
