/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 12:20:44 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/22 23:29:47 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int x;

	x = 0;
	while (tab[x])
	{
		i = 0;
		while (tab[x][i])
		{
			ft_putchar(tab[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
}
