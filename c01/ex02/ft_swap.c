/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:02:45 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/28 15:05:56 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
    int a = 10;
    int b = 20;
    char ac[2];
    char bc[2];

    ft_swap(&a, &b);
    ac[0] = a / 10 + '0';
    ac[1] = a % 10 + '0';
    bc[0] = b / 10 + '0';
    bc[1] = b % 10 + '0';
    write(1, &ac, 2);
    write(1, ", ", 2);
    write(1, &bc, 2);
}
*/
