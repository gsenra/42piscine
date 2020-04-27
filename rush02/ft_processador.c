/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processador.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:31:36 by sfreitas          #+#    #+#             */
/*   Updated: 2019/12/08 22:06:03 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_estrutura.h"

void	ft_quant(char number[], struct schema tabela[], int n_lines);

int	g_i;
int g_j;
int g_k;

/*
** -----------------------------------------------------------------------------
** Função responsável por preencher os campos das estrutura recebe um ponteiro |
** com o valor da string a ser preechida e intera em um laço while caractere   |
** por caractere.                                                              |
** -----------------------------------------------------------------------------
*/

void	ft_fill_struct(char *field, char value[], int total)
{
	int i;

	i = 0;
	while (i < total)
	{
		field[i] = value[i];
		i++;
	}
	field[i] = '\0';
}

/*
** ----------------------------------------------------------------------------|
** Função responsável por criar uma matriz de estruturas chamada SCHEMA.       |
** Ela recebe o número de linhas do dicionário e o texto tratado sem os espaços|
** e separa pelos caracteres ':' e '\n' os campos NÚMERO e NOME e os envia para|
** serem preenchidos na estrutura chamando a função "ft_fill_struct"		   |
** ----------------------------------------------------------------------------|
*/

void	ft_assembler(int n_lines, char *dict, char number[])
{
	char			value[150];
	struct schema	*tabela;

	tabela = (struct schema*)malloc(sizeof(struct schema) * n_lines);
	while (dict[g_i] != '\0')
	{
		if (dict[g_i] == '\n')
		{
			ft_fill_struct(tabela[g_j].nome, value, g_k);
			g_j++;
			g_k = 0;
		}
		else if (dict[g_i] == ':')
		{
			ft_fill_struct(tabela[g_j].numero, value, g_k);
			g_k = 0;
		}
		else
		{
			value[g_k] = dict[g_i];
			g_k++;
		}
		g_i++;
	}
	ft_quant(number, tabela, n_lines);
}

/*
**---------------------------------------------------------------------------  |
**Função responsável por tratar o texto contido no dicionario eliminando os    |
**espaços.														               |
**Por fim chama a função "ft_assembler" passando como parametro o número de    |
**linhas e o ponteiro allocado pelo comando malloc.                            |
**--------------------------------------------------------------------------- -|
*/

void	ft_clean(unsigned int size, char *dict, char number[])
{
	char	*p_limpo;
	int		i;
	int		j;
	int		k;

	p_limpo = (char*)malloc(size);
	i = 0;
	j = 0;
	k = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] != ' ')
		{
			p_limpo[j] = dict[i];
			j++;
		}
		if (dict[i] == '\n')
			k++;
		i++;
	}
	ft_assembler(k, p_limpo, number);
	free(p_limpo);
}

/*
** --------------------------------------------------------------------------- |
** Função responsável por ler o dicionário e armazenar em um espaço alocado por|
** malloc.																	   |
** Ela recebe por parâmetros o tamanho total em bytes e o caminho onde está    |
** armazenado o dicionário e por fim envia os dados para serem tratados na     |
** função "ft_clean".														   |
** --------------------------------------------------------------------------- |
*/

void	ft_reader(unsigned int size, char source[], char number[])
{
	int		st_file;
	char	*p_dict;

	p_dict = (char*)malloc(size);
	st_file = open(source, O_RDONLY);
	read(st_file, p_dict, size);
	ft_clean(size, p_dict, number);
	free(p_dict);
}

/*
** ----------------------------------------------------------------------------|
** Função responsável por dimensionar o tamanho total de bytes para leitura do |
** dicionário. Ela utiliza as funções OPEN E READ para abertura do documento e |
** leitura de seus dados respectivamente.									   |
** A cada interação com o comando read ele avança um caractere para direita e  |
** para somente quando estoura o número de bytes do arquivo retornando um valor|
** menor que zero parando a interação.										   |
** O contador i fica responsável por armazenar a quantidade de bytes que depois|
** serão enviados por parâmetro para a função "ft_reader" junto com o caminho  |
** do arquivo do dicionário.												   |
** ----------------------------------------------------------------------------|
*/

void	ft_buffer(char source[], char number[])
{
	unsigned int	st_file;
	unsigned int	st_read;
	int				i;
	char			carac;

	i = 1;
	st_read = 1;
	st_file = open(source, O_RDONLY);
	while ((st_read = read(st_file, &carac, 1)) > 0)
		i++;
	i--;
	close(st_file);
	ft_reader(i, source, number);
}
