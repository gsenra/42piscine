/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:37:09 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/05 12:30:14 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_up_putnbr(unsigned int n);

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
		ft_putchar('-');
	n = nb;
	ft_up_putnbr(n);
}

void	ft_up_putnbr(unsigned int n)
{
	char un;

	if (n / 10 > 0)
		ft_up_putnbr(n / 10);
	un = n % 10 + '0';
	ft_putchar(un);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
