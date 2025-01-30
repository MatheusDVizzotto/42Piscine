/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:11:07 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/30 12:11:18 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
    while (n < n)
    {
        dest[i] = '\0';
    }
	return (dest);
}

int	main(void)
{
	char	d[10];
	char	s[] = "hello";
	int	i;
    unsigned int n;

	i = 0;
    n = 5;
	ft_strncpy(d, s, n);	
	write(1, d, n);	
    write(1, "\n", 1);
	if (d[n] == '\0')
		write(1, "Ok", 2);
	return (0);
}