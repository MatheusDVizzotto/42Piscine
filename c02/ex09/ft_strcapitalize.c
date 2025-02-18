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
				if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && !(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && !(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char test[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	int i = 0;
	int test2;

	ft_strcapitalize(test);

	while (test[i] != '\0')
	{
		write(1,&test[i],1);
		i++;
	}
}