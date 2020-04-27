/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:12:50 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/09 12:34:53 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	n = 0;
	if (argc < 1)
		return (0);
	else
	{
		while (i < argc)
		{
			while (argv[i][n] != '\0')
			{
				write(1, &argv[i][n], 1);
				n++;
			}
			write(1, "\n", 1);
			i++;
			n = 0;
		}
	}
	return (0);
}
