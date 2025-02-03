/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 09:44:42 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/03 10:25:43 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int i;
	char test[5];
	char *test_a;

	i = 0;

	test[0] = 's';
	test[1] = 'd';
	test[2] = 'f';
	test[3] = 'c';
	test[4] = 'w';

	test_a = ft_strupcase(test);

	while(test_a[i] != '\0')
	{
		write(1,&test_a[i],1);
		i++;
	}
	
}*/
