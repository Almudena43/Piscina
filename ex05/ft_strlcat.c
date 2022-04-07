/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:11:34 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/22 15:18:02 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	pos;
	int				len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	pos = len_dest;
	if (size == 0)
		return (len_src);
	while (src[pos] != '\0')
	{
		if (len_dest + pos + 1 < size)
			dest[len_dest + pos] = src[pos];
		pos++;
	}
	if (len_dest + 1 < size)
		dest[len_dest + pos] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
