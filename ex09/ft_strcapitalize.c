/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:43:26 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 15:55:02 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
			str[aux] = str[aux] + 32;
		if (str[aux] >= 97 && str[aux] <= 122)
		{		
			if (aux == 0)
				str[aux] = str[aux] - 32;
			else if (! ((str[aux - 1] >= 'a' && str[aux - 1] <= 'z')
					|| (str[aux - 1] >= 'A' && str[aux - 1] <= 'Z')
					|| (str[aux - 1] >= '0' && str[aux - 1] <= '9')))
				str[aux] = str[aux] - 32;
		}
	aux++;
	}
	return (str);
}
