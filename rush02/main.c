/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:58:09 by sfreitas          #+#    #+#             */
/*   Updated: 2019/12/08 20:49:19 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char v_string[]);
int		ft_isnumber(char valor[]);
void	ft_buffer(char source[], char number[]);

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_isnumber(argv[i]) == 0)
			{
				ft_buffer("numbers.dict", argv[i]);
			}
			i++;
		}
	}
	return (0);
}
