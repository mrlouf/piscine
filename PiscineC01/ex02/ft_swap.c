/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:05:32 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/11 12:10:31 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a = 1;
	int b = 2;
	printf("Value of a: %i\n", a);
	printf("Value of b: %i\n", b);
	ft_swap(&a, &b);
	printf("Value of a: %i\n", a);
	printf("Value of b: %i\n", b);
}*/
