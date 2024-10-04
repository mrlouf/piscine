/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:33:18 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/09 16:39:16 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alph;

	alph = 'a';
	while (alph <= 'z')
	{
		write(1, &alph, 1);
		++alph;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
