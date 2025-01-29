/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:37:31 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/29 11:50:17 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort(int *list, int *tab, int ls, int c)
{
	int	size;
	int	i;
	int	hold;

	size = ls + 1;
	while (i < size)
	{
		while (c < size)
		{
			if (tab[hold] < tab[c])
			{
				hold = c;
			}
			c++;
		}
		list[ls] = tab[hold];
		tab[hold] = 0;
		hold = 0;
		ls--;
		i++;
		if (ls >= 0)
		{
			c = 0;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	list[99];
	int	i;

	i = 0;
	ft_sort(list, tab, size -1, 0);
	while (i < size)
	{
		tab[i] = list[i];
		i++;
	}
}
/*
int	main(void)
{
	int test[99] = {1,5,9,2,3,10,50,7};
	int i = 0;

	ft_sort_int_tab(test,8);

	while(i < 8)
        {
                printf(" %i \n",test[i]);
                i++;
        }

}*/
