/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:02:50 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/11/26 14:21:15 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char betoalfa;

	betoalfa = 'z';
	while (betoalfa >= 'a')
	{
		write(1, &betoalfa, 1);
		betoalfa--;
	}
}
