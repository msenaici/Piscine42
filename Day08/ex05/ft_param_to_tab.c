/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:34:26 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/24 00:45:57 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (result);
	while (i < len)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;
	int			i;

	if (!(tab = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].size_param = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	tab[i].tab = 0;
	return (tab);
}
