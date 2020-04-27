/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:52:48 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/09 21:53:13 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = argc - 1;
	n = 0;
	if (argc < 1)
		return (0);
	else
	{
		while (i > 0)
		{
			while (argv[i][n] != '\0')
			{
				write(1, &argv[i][n], 1);
				n++;
			}
			i--;
			n = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}
