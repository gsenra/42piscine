/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oinicio.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 11:01:15 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/01 11:31:01 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_choice(int c, int l, int larg, int alt)
{
    if ((c == 0 && l == 0) || (c == larg - 1 && l == 0))
        ft_putchar('A');
    else if ((c == 0 && l == alt - 1) || (c == larg - 1 && l == larg - 1))
        ft_putchar('C');
    else if (c == 0 || c == alt - 1 || l == 0 || l == larg - 1)
        ft_putchar('B');
    else
        ft_putchar(' ');
}


void	matriz_base(void)
{
	int larg;
	int alt;
	int l;
	int c;

	larg = 4;
	alt = 4;
	l = 0;
	while (l < alt)
	{
		c = 0;
		while ( c < larg)
		{
			ft_choice(c, l, larg, alt);
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}

int main(void)
{
	matriz_base();
	return 0;
}
