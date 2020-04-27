/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:37:42 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/10 10:46:19 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int answr;

	answr = 1;
	if (power < 0)
		return (0);
	else
	{
		while (power >= 1)
		{
			answr = answr * nb;
			power--;
		}
		return (answr);
	}
}
