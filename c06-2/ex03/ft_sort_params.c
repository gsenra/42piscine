/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:49:31 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/12/09 20:23:03 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int		main(int argc, char *argv[])
{
	int		i;
	char	*aux;
	int		n;

	i = 0;
	while (++i < argc - 1)
	{
		n = i;
		while (++n < argc)
		{
			if (ft_strcmp(argv[i], argv[n]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[n];
				argv[n] = aux;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
