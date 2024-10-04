/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:49:14 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/11 12:14:06 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 25;
	b = 6;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("Result: %d\nRemainder: %d\n", div, mod);
}*/
