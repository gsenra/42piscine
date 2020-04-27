/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:39:44 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/12 12:00:53 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int n;

	n = 1;
	result = 1;
	if ((nb < 0) || (nb >= 13))
		return (0);
	if ((nb >= 0) && (nb <= 12))
	{
		while (n <= nb)
		{
			result = result * n;
			n++;
		}
	}
	return (result);
}
