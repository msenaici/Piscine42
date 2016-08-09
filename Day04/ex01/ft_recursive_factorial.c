/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 05:53:31 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/09 13:34:15 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
