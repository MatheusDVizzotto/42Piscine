/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:22:13 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/06 14:37:17 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	prime[4];

	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;
	i = 0;
	if (nb < 2)
	{
		return (0);
	}
	while (i < 4)
	{
		if (nb == prime[i])
			return (1);
		if (nb != prime[i] && nb % prime[i] == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	ft_is_prime(1);
}*/
