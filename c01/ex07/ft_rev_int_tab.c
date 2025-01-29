/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:14:11 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/29 08:39:46 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		i_r;
	char	list[99];

	i = 0;
	while (i < size)
	{
		list[i] = tab[i];
		i++;
	}
	i = size - 1;
	i_r = 0;
	while (i >= 0)
	{
		tab[i] = list[i_r];
		i--;
		i_r++;
	}
}
/*
int	main(void)
{
	int test[5];
	int i = 0;

	test[0] = 1;
	test[1] = 2;
	test[2] = 3;
	test[3] = 4;
	test[4] = 5;

	ft_rev_int_tab(test,5);
	while(i < 5)
	{
		printf(" %i \n",test[i]);
		i++;
	}

}*/
