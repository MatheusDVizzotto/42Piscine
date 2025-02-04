/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:13 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/04 13:38:12 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;
	unsigned int	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	sum = 0;
	i = 0;
	if (size > d)
		sum = d + s;
	else
		sum = s + size;
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}
/*
int	main(void)
{
	char	*src = "test ft to check if work";
	char	dest[20] = "che";
	unsigned int len;
	char t;

	len = ft_strlcat(dest, src, 10);
	t = len + '0';
	printf("%i",t);
}*/
