/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:25:47 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/13 14:11:04 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(int argc, char **argv)
{
	int i = 0;
	char *letter;
	char *word;
	
	word = argv[1];
	letter = ft_strdup(word);
	while (letter[i] != '\0')
	{
		write(1,&letter[i],1);
		i++;
	}
	free(letter);
	letter = NULL;
}*/
