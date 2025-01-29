/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:20:41 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/28 15:12:47 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char test;

	test = ft_strlen("testando") + '0';

	write(1, &test, 1);
}
*/
