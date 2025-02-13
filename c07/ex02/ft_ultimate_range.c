/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:12:07 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/12 13:58:09 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	i2;

	i = min;
	i2 = 0;
	range[0] = malloc(sizeof(int) * (max - min));
	if (range == NULL || max <= min || min == INT_MIN || max == INT_MAX)
	{
		range[0] = NULL;
		return (0);
	}
	while (i < max)
	{
		range[0][i2] = i;
		i2++;
		i++;
	}
	return (i2);
}
/*
int     main()
{
        int i = 0;
        int *letter;

        printf("%d\n",ft_ultimate_range(&letter,0,0));
        while (i < 5)
        {
                printf("%d\n",letter[i]);
                i++;
        }
        free(letter);
        letter = NULL;
}
*/
