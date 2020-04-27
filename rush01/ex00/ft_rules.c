/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 11:37:26 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/01 13:14:56 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(int col1up, int col2up, int col3up, int col4up, int col1down, int col2down, int col3down, int col4down, int row1left, int row2left, int row3left, int row4left, int row1right, int row2right, int row3right, int row4right)
{
	int colup[4]; 
	colup[0] = col1up;
	colup[1] = col2up;
	colup[2] = col3up;
	colup[3] = col4up;

	int coldown[4];
	coldown[0] = col1down;
	coldown[1] = col2down;
	coldown[2] = col3down;
	coldown[3] = col4down;

	int rowleft [4];
	rowleft[0] = row1left;
	rowleft[1] = row2left;
   	rowleft[2] = row3left;
   	rowleft[3] = row4left;

	int rowright [4];
	rowright[0] = row1right;
	rowright[1] = row2right;
	rowright[2] = row3right;
	rowright[3] = row4right;

	int sc0;
	int sc1;
	int sc2;
	int sc3;
	int sl0;
	int sl1;
	int sl2;
	int sl3;
	int scup;
	int scdown;
	int srleft;
	int srright;

	sc0 = colup[0] + coldown[0];
	sc1 = colup[1] + coldown[1];
	sc2 = colup[2] + coldown[2]; 	
	sc3 = colup[3] + coldown[3];
	sl0 = rowleft[0] + rowright[0];
	sl1 = rowleft[1] + rowright[1];	
	sl2 = rowleft[2] + rowright[2];
	sl3 = rowleft[3] + rowright[3];




	write(1, &col1up, 1);


	write(1, &sc0, 16);
	write(1, &sc1, 1);
	write(1, &sc2, 1);
	write(1, &sc3, 1);

	write(1, &sl0, 1);
	write(1, &sl1, 1);
	write(1, &sl2, 1);
	write(1, &sl3, 1);
	
	
	if (!((sc0  < 2 && sc0 >  5) && (sc1 < 2 && sc1 > 5) && (sc2 < 2 && sc2 > 5 ) && (sc3 < 2 && sc3 > 5)))
	{
		write(1, &sc0, 1);
		write(1, &sc1, 1);
		write(1, &sc2, 1);
		write(1, &sc3, 1);	
	}

	else if (!((sl0  < 2 && sl0 >  5) && (sl1 < 2 && sl1 > 5) && (sl2 < 2 && sl2 > 5 ) && (sl3 < 2 && sl3 > 5))) 
	{
		write(1, &sl0, 1);
		write(1, &sl1, 1);
		write(1, &sl2, 1);
		write(1, &sl3, 1);
	}
}

int		main(void)
{
	rush01(4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2);
	return 0;
}
