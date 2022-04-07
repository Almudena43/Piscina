/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:46:11 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 15:02:49 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	gato;

	gato = 0;
	while (str[gato])
	{
		if (!(str[gato] >= 32 && str[gato] <= 126))
			return (0);
			gato++;
	}	
	return (1);
}
