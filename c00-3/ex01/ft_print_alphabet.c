/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tentativa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:34:37 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/11/21 20:51:56 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}
