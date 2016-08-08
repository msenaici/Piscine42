/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 14:35:59 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/05 15:19:53 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		ft_putchar(nombre);
		nombre++;
	}
}
