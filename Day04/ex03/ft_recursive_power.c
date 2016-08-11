/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:38:49 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/11 00:56:32 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int r;
	int i;

	i = 0;
	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power--;
	r = nb * ft_recursive_power(nb, power);
	return (r);
}
