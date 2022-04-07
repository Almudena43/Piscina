/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:44:02 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 12:42:59 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	miau;

	miau = 0;
	while (str[miau])
	{
		if (!(str[miau] >= 'A' && str[miau] <= 'Z'))
			return (0);
			miau++;
	}
	return (1);
}
