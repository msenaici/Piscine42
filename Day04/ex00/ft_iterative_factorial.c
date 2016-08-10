/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 16:57:08 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/10 05:49:09 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	nb1;

	nb1 = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	if (nb > 0)
	{
		while (nb1 > 0)
		{
			nb = nb * nb1;
			nb1--;
		}
		return (nb);
	}
	else
		return (0);
}
