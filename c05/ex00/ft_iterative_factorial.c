/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:38:11 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/06 14:28:14 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 19 || nb < 0)
	{
		return (0);
	}
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}
/*
int	main()
{
	printf("%i",ft_iterative_factorial(19));
}*/
