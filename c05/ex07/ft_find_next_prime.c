/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:04:55 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/06 14:55:27 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	check_prime(int nb, int prime[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (nb % prime[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime[4];
	int	ip;
	int	i;

	ip = 0;
	i = 0;
	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;
	if (nb == prime[0] || nb == prime[1] || nb == prime[2] || nb == prime[3])
		return (nb);
	if (nb < 2)
		return (2);
	while (ip != 1)
	{
		ip = check_prime(nb + i, prime);
		if (ip == 0)
			i++;
	}
	return (nb + i);
}
/*
int main()
{
	printf("%i",ft_find_next_prime(17));
}*/
