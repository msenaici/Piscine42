/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:46:05 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/09 13:49:12 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 46)
		return (0);
	else if (index <= 1)
		return (index);
	else
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
