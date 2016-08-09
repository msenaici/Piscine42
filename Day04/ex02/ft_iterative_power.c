/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:24:42 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/09 13:36:30 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nb1;

	nb1 = nb;
	if (power == 0 && nb == 0)
		return (1);
	if (nb == 1 && power == 0)
		return (1);
	if (power > 0)
	{
		while (power / 2 > 0)
		{
			nb = nb * nb1;
			power--;
		}
		return (nb);
	}
	else
		return (0);
}
