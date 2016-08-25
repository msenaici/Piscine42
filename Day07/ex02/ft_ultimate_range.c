/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:29:59 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/23 12:20:56 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*s;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	s = (int *)malloc(sizeof(*s) * (max - min));
	while (min < max)
	{
		s[i] = min;
		i++;
		min++;
	}
	*range = s;
	return (i);
}
