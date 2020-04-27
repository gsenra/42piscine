/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:26:22 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/04 20:26:51 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int		main(void)
{
	char str[] = "chocolate";
	printf("essa string é: chocolate(9), então: %d\n", ft_strlen(str));
	return (0);
}
