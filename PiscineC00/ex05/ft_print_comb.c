/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:56:16 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/09 16:40:46 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	chars[3];

	chars[0] = '0';
	while (chars[0] <= '7')
	{
		chars[1] = chars[0] + 1;
		while (chars[1] <= '8')
		{
			chars[2] = chars[1] + 1;
			while (chars[2] <= '9')
			{
				write(1, &chars, 3);
				if ((chars[0] != '7') || (chars[1] != '8') || (chars[2] != '9'))
					write(1, ", ", 2);
				chars[2]++;
			}
			chars[1]++;
		}
		chars[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
