/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:37:48 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/21 18:14:37 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*replace_line(char *tab, int argc, char **argv)
{
	int		r;
	int		size;
	int		i;

	i = 0;
	size = 0;
	r = 1;
	while (argc != r)
	{
		while (argv[r][i])
		{
			tab[size] = argv[r][i];
			i++;
			size++;
		}
		tab[size] = '\n';
		r++;
		size++;
		i = 0;
	}
	return (tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		r;
	int		size;
	int		i;
	char	*tab;

	i = 0;
	r = 1;
	size = 0;
	while (argc != r)
	{
		while (argv[r][i])
			i++;
		size = size + 1 + i;
		i = 0;
		r++;
	}
	tab = (char *)malloc(sizeof(char) * (size));
	tab = replace_line(tab, argc, argv);
	tab[size - 1] = '\0';
	return (tab);
}
