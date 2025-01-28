/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:14:11 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/29 08:41:25 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int             i;
        int             i_r;
        char    list[99];

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

int     main(void)
{
        int test[99];
        int i = 0;
        int testn;

        while(testn < 15)
        {
                test[testn] = testn;
                testn++;
        }

        ft_rev_int_tab(test,testn);
        while(i < testn)
        {
                printf(" %i \n",test[i]);
                i++;
        }

}
