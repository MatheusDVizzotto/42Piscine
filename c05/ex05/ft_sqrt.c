/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:10:23 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/06 14:35:04 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (result < nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
