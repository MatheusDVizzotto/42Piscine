/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:09:29 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/06 14:29:32 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb > 19)
	{
		return (0);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int main ()
{
	printf("%i",ft_recursive_factorial(12));
}*/
