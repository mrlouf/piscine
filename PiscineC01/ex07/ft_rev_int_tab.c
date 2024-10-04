/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:33:57 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/11 13:23:07 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size--;
	while (i < size)
	{
		swap = tab[size];
		tab[size] = tab[i];
		tab[i] = swap;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	tab[7] = {0, 0, 0, 5, 1, 7, 9};
	int	size = 7;
	int	i = 0;

	while (i < size)
		printf("%d", tab[i++]);
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
		printf("%d", tab[i++]);
}*/
