/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:00:39 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/12 13:59:55 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	i2;
	int	*list;

	i = 0;
	i2 = min;
	list = malloc(sizeof(int) * (max - min));
	if (list == NULL || min >= max)
		return (NULL);
	while (i2 < max)
	{
		list[i] = i2;
		i++;
		i2++;
	}
	return (list);
}
/*
int     main()
{
        int i = 0;
        int *letter;

        letter = ft_range(-10,-5);
        while (i < 5)
        {
                printf("%d\n",letter[i]);
                i++;
        }
        free(letter);
        letter = NULL;
}
*/
