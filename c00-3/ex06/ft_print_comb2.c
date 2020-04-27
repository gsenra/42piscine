/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retryprint_comb2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:50:13 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/11/25 18:35:48 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int numb)
{
	write(1, &numb, 1);
}

void	ft_print_comb2(void)
{
	int num;
	int ero;

	num = 0;
	while (num <= 98)
	{
		ero = num + 1;
		while (ero <= 99)
		{
			ft_putchar((char)(num / 10 + '0'));
			ft_putchar((char)(num % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((char)(ero / 10 + '0'));
			ft_putchar((char)(ero % 10 + '0'));
			if (num != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ero++;
		}
		num++;
	}
}
