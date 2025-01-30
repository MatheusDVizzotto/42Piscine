/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:19:07 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:37:20 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	char check;

	i = 0;
	if (str[0] == '\0')
	{
                return (1);
	}
	i = 0;
        while (str[i] != '\0')
        {
			check = str[i];
            if (str[i] < 'A'/*65*/ || str[i] > 'Z'/*90*/ && str[i] < 'a'/*97*/ || str[i] > 'z'/*122*/)
			{
				return (0);
			}
            i++;
        }
        return (1);

}

int	main(void)
{
	char test[5];
	char aswc;

	int asw;


	test[0] = 'a';
	test[1] = 'z';
	test[2] = 'A';
	test[3] = 'Z';
	test[4] = '5';

	asw = ft_str_is_alpha(test);
	aswc = asw + '0';
	write(1,&aswc,1);
}
