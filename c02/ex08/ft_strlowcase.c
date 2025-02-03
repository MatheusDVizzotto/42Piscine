/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:37:56 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/31 11:13:10 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int i;
	char *test_a;
	char test[20];

	i = 0;
	test[0] = 'K';
	test[1] = 'A';
	test[2] = 'H';
	test[3] = 'V';
	test[4] = 'S';
	test[5] = 'F';
	

	test_a = ft_strlowcase(test);

	while(test_a[i] != '\0')
	{
		write(1,&test_a[i],1);
		i++;
	}

}*/
