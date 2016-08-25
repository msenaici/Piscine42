/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 10:36:11 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/24 05:09:47 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * len);
	if (result == 0)
		return (result);
	while (i < len - 1)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
