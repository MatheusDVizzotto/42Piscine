/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:54:12 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/10 14:08:37 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		ai;
	char	*tl;

	i = argc - 1;
	ai = 0;
	if (argc == 1)
	{
		return (0);
	}
	while (i >= 1)
	{
		tl = argv[i];
		while (tl[ai] != '\0')
		{
			write(1, &tl[ai], 1);
			ai++;
		}
		write(1, "\n", 1);
		ai = 0;
		i--;
	}
}
