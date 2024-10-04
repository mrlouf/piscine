/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:52:02 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/11 12:28:59 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;	

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("Result: %d\nRemainder: %d\n", a, b);
}*/
