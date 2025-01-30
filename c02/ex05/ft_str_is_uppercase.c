/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:34:41 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:41:25 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char test[5];
        char aswc;

        int asw;


        test[0] = 'A';
        test[1] = 'F';
        test[2] = 'g';
        test[3] = 'V';
        test[4] = 'M';

        asw = ft_str_is_alpha(test);
        aswc = asw + '0';
        write(1,&aswc,1);
}*/
