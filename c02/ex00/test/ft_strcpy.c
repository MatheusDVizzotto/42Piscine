/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:20:47 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/01/30 12:03:44 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	d[10];
	char	s[] = "hello";
	int	i;

	i = 0;
	ft_strcpy(d, s);
	write(1, d, 5);	
    write(1, "\n", 1);
	if (d[5] == '\0')
		write(1, "Ok", 2);
	return (0);
}
