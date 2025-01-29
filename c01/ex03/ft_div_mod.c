/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:11:29 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/28 10:11:34 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a;
    int b;
    int div;
    int mod;
    char div_c[2];
    char mod_c[2];

    a = 100;
    b = 9;
    ft_div_mod(a, b, &div, &mod);

    div_c[0] = div / 10 + '0';
    div_c[1] = div % 10 + '0';
    mod_c[0] = mod / 10 + '0';
    mod_c[1] = mod % 10 + '0';
    write(1, &div_c, 2);
    write(1, ", ", 2);
    write(1, &mod_c, 2);
}
*/
