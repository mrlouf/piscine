/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:03:14 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/23 13:38:16 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	j;

	min = -10;
	max = 10;
	j = min;
	printf("i = %d\n", ft_ultimate_range(&range, min, max));
	while (j < max)
	{
		printf("Position %d: %d\n", j - min, range[j - min]);
		j++;
	}
	free(range);
	return (0);
}
