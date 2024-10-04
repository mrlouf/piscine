/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:34:40 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/09 16:39:53 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alph;

	alph = 'z';
	while (alph >= 'a')
	{
		write(1, &alph, 1);
		--alph;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
