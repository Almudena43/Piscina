/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:22:17 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 19:46:43 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	miau;

	miau = 0;
	while (str[miau])
	{
		if (!(str[miau] >= 'A' && str[miau] <= 'Z')
			&& !(str[miau] >= 'a' && str[miau] <= 'z'))
			return (0);
		miau++;
	}
	return (1);
}
