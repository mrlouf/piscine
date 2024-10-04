/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:26:41 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/21 19:18:33 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = min;
	while (i < max)
	{
		range[(i - min)] = i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	min = 10;
	max = 20;
	i = 0;
	range = ft_range(min, max);
	while (i < max - min)
	{
		printf("Position %d = %d\n", i, range[i]);
		i++;
	}
	free (range);
	return (0);
}*/
