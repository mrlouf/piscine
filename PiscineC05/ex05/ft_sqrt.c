/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:15:40 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/20 16:42:44 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	if (nb % 1 != 0)
		return (0);
	if (nb == 0)
		return (0);
	while (res * res < nb)
		res++;
	if (res * res == nb)
		return (res);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = -25;
	printf("Square root of %d = %d\n", nb, ft_sqrt(nb));
}*/
