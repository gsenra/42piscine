/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_quantidade.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:43:04 by sfreitas          #+#    #+#             */
/*   Updated: 2019/12/08 20:16:04 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_estrutura.h"
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

char	*ft_busca_linha(char *t_numero, struct schema tabela[], int n_lines)
{
	int i;
	int j;
	int validador;
	
	i = 0;
	validador = 0;
	while(i < n_lines)
	{	
		if(ft_strcmp(tabela[i].numero, t_numero) == 0)
		{
			j = i;
			validador = 1;
		}
			i++;
	}
	if (validador == 1)
	{
		return (tabela[j].nome);
	}
	else
		return ("erro");
}

void	ft_unidade(char *unidade, struct schema *tabela, int n_lines)
{
	printf("%s", ft_busca_linha(unidade, tabela, n_lines));
}


void	ft_quant(char number[], struct schema tabela[], int n_lines)
{
	int inteiro;
	int resto;
	int i;

	i = 0;

	while (number[i] != '\0')
		i++;	
	
	inteiro = i / 3;
	resto = i % 3;

	//if(i == 1)
	ft_unidade(number, tabela, n_lines);

}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//	printf("inteiro = %d , resto = %d, digitos = %d", inteiro, resto, i);


/*
void	ft_read_new(char *new_string)
{
	int i;
	char *p;

	p = &new_string[0];
	i = 0;
	if (new_string[0] >= '1' && new_string[0] <= '9')
	{
		//buscar o valor (string[0]) no dicionário
		//buscar no dicionário o resultado da função que categoriza i as nomenclaturas de acordo com o n°de zeros.
	}
	if (new_string[1] == '1')
	{
		p++;
		// buscar string a partir da posição p++ no dicionario
		// ou seja, bus
	}
}
*/







/*

void	ft_quantc(char number[], char *dict)
{
	int i;
	char new_string[3];
	char *p_number;
	new_string = "aaa";
	i = 0;
	while (number[i] != '\0')
		i++;
	p_number = &number[0];
	if (i % 3 == 1)
	{
		new_string[0] = '0';
		new_string[1] = '0';
		new_string[2] = number[0];
		p_number = &number[1];
	}
	else if (i % 3 == 2)
	{
		new_string[0] = '0';
		new_string[1] = number[0];
		new_string[2] = number[1];
		p_number = &number[2];
	}
	i = i / 3;
	if (new_string != "aaa")
		ft_read_new(new_string);
	else
		//chamar função que lê number	
}*/
