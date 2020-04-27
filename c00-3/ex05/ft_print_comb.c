/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 16:40:32 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/11/25 11:05:45 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num)
{
	write(1, &num, 1);
}

void	ft_change_numb(int n, int m, int r)
{
	ft_putchar(n);
	ft_putchar(m);
	ft_putchar(r);
	if (n < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int n;
	int m;
	int r;

	n = '0';
	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			r = m + 1;
			while (r <= '9')
			{
				ft_change_numb(n, m, r);
				r++;
			}
			m++;
		}
		n++;
	}
}
