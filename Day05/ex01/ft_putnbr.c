/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 22:42:28 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/16 11:54:24 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

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
