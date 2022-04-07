/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:30:04 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/21 19:41:30 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	jope;

	jope = 0;
	while (str[jope])
	{
		if (str[jope] >= 'A' && str [jope] <= 'Z')
		{
		str[jope] = str[jope] + 32;
		}
		jope++;
	}
	return (str);
}	
