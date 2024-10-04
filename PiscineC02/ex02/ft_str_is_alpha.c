/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:42:31 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 18:07:10 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = "asdasdaw";
	printf("Return value : %d\n", ft_str_is_alpha(test));
}*/
