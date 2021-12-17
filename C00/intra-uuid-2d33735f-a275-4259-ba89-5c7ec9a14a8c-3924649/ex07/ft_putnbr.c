/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:59:23 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/13 16:10:27 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{	
	char	b;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
	nb = -nb;
	}
	if (nb >= 0)
	{
	b = nb % 10 + '0';
		if (nb / 10 > 0)
		{
			ft_putnbr(nb / 10);
		}	
		write (1, &b, 1);
	}
}
