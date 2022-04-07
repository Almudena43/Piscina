/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:44:55 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/06 16:40:31 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	aguita;

	aguita = 'a';
	while (aguita <= 'z')
	{
		write(1, &aguita, 1);
		aguita++;
	}
}
