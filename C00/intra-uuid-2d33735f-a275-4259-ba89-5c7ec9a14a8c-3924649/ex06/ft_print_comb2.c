/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:18:08 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/14 17:56:35 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putchar(a, b);
		b++;
		}
	a++;
	b = a + 1;
	}
}
