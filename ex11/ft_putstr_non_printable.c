/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:46:26 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 16:55:00 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	hal;

	i = 0;
	while (str[i] != '\0' )
	{
		if (!((str[i] >= 32) && (str[i] < 127)))
		{
			write(1, "\\", 1);
			hal = str[i];
			write(1, &"0123456789abcdef"[hal / 16], 1);
			write(1, &"0123456789abcdef"[hal % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
