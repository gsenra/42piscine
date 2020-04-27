/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:03:08 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/05 12:18:12 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int nb;
	int nb2;

	nb = -2147483648;
	nb2 = 2147483647;
	
	printf("esse é o menor int negativo \n");
	ft_putnbr(nb);
	printf("esse é o maior int positivo \n");
	ft_putnbr(nb2);
	return (0);
}
