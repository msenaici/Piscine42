/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenaici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:52:12 by msenaici          #+#    #+#             */
/*   Updated: 2016/08/16 20:38:02 by msenaici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (j == 1)
				str[i] = str[i] - 32;
			j = 0;
		}
		else if (str[i] > 47 && str[i] < 58)
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
