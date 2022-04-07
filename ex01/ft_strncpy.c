/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:31:58 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/20 20:09:59 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	miau;

	miau = 0;
	while (src[miau] && miau < n)
	{
		dest[miau] = src[miau];
		miau++;
	}
	while (miau < n)
	{
		dest[miau] = '\0';
		miau++;
	}
	return (dest);
}
