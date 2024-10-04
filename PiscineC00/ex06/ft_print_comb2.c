/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:03:19 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/09 16:41:12 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	chars[5];
	int		i;
	int		j;

	chars[2] = ' ';
	i = 0;
	while (i < 100)
	{
		chars[0] = '0' + (i / 10);
		chars[1] = '0' + (i % 10);
		j = i + 1;
		while (j < 100)
		{
			chars[3] = '0' + (j / 10);
			chars[4] = '0' + (j % 10);
			write (1, chars, 5);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
