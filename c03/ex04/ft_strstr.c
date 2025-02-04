/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:30:29 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/04 11:07:27 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] != '\0')
		{
			if (str[i + f] == to_find[f])
				f++;
			else
				break ;
		}
		if (to_find[f] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
int     main(void)
{
        char    *str = "test code";
        char    to_find[10] = "st";

        printf("%s", ft_strstr(str, to_find));
}
*/
