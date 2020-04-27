/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coment_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:24:30 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/05 13:25:22 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	char *hug;
	int neg;
	int i;
	int answ;

	neg = 1;
	*hug = *str
/* ft_if_space */
	while ((*srt == '\f') || (*srt == '\n') || (*str == ' ')
		   (*str == '\t') || (*str == '\v'))
		*str++;
/* retorna o *str na posição após os espaços */


/* ft_if_signal */
int		ft_is_signal(char *str)
{	int i;

	i = *str;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			neg *= - 1;
			i++;
		}
		else
			*i++;
	}
	neg = i * neg
	return (neg);
}
/* retorna em neg o sinal de positivo ou negativo + a posição da string */

	i = neg * - 1;
	neg = neg / neg;

	answ = 0;
	while (str[i] != '\0' && str[i] >= 0 && str[i] <= 9)
	{
		answ = answ * 10;
		answ = (answ + str[i] - 48);
		i++;
	}
	answ = answ * neg;
	return (answ);
}
