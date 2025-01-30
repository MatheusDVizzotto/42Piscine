/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:11:50 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:20:27 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int     i;
 	
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
 		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char test[5];
        char aswc;

        int asw;


        test[0] = '2';
        test[1] = 'a';
        test[2] = '5';
        test[3] = '9';
        test[4] = '5';

        asw = ft_str_is_numeric(test);
        aswc = asw + '0';
        write(1,&aswc,1);

}
