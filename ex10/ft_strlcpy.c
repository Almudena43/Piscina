/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:01:17 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 16:24:45 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)

{
	unsigned int	aux;
	unsigned int	count;

	aux = 0;
	count = 0;
	while (src[count])
		count++;
	if (size != 0)
	{
		while (src[aux] && aux < size - 1)
		{
			dest[aux] = src[aux];
			aux++;
		}
		dest[aux] = '\0';
	}
	return (count);
}
