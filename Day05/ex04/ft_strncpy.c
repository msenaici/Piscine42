/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 14:47:38 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/16 11:38:48 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (int)n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
