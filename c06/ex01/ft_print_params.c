/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiehl-v <mdiehl-v@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:53:20 by mdiehl-v          #+#    #+#             */
/*   Updated: 2025/02/10 09:15:50 by mdiehl-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		ai;
	char	*tl;

	i = 1;
	ai = 0;
	if (argc == 1)
	{
		return (0);
	}
	while (i < argc)
	{
		tl = argv[i];
		while (tl[ai] != '\0')
		{
			write(1, &tl[ai], 1);
			ai++;
		}
		write(1, "\n", 1);
		ai = 0;
		i++;
	}
}
