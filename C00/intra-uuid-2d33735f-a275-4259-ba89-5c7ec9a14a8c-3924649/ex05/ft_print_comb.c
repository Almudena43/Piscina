/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:57:15 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/13 05:39:00 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}	

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

		a = '0';
		b = '1';
		c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
	c++;
			}
	b++;
	c = b + 1;
		}
	b = a + 1;
	a++;
	}
}
