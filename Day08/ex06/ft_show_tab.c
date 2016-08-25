/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:50:35 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/22 23:25:15 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
			ft_putstr("-2147483648");
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		if (nb != -2147483648)
			ft_putchar(nb + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;

	if (!par)
		return ;
	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (*par[i].tab)
		{
			ft_putstr(*par[i].tab++);
			ft_putchar('\n');
		}
		i++;
	}
}
