/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:40:57 by almadrid          #+#    #+#             */
/*   Updated: 2021/12/17 12:47:24 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b);
{
	int exam
	exam = *a
	*a = *b
	*b = exam
}

int main(void)
{
    int a;
    int b;
    a = 1;
    b = 2;
    printf("before: %d %d \n", a, b);
    ft_swap(&a, &b);
    printf("after: %d %d \n", a, b);
}
