/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:38:49 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/10 23:20:49 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int r;

	r = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
