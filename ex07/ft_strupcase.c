/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:49:09 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 15:28:50 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	glam;

	glam = 0;
	while (str[glam])
	{
		if (str[glam] >= 'a' && str[glam] <= 'z')
		{
		str[glam] = str[glam] - 32;
		}
		glam++;
	}
	return (str);
}
