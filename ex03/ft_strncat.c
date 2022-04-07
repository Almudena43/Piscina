/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:33:41 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/22 14:50:05 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos;
	unsigned int	end;

	pos = 0;
	while (dest[pos] != '\0')
		pos++;
	end = pos;
	pos = 0;
	while (src[pos] != '\0' && pos < nb)
	{
		dest[end + pos] = src[pos];
		pos++;
	}
	dest[end + pos] = '\0';
	return (dest);
}
