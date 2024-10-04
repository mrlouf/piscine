/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:49:25 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/13 13:51:56 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		else
			i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test;
	test = "UYTUTGH";
	printf("Return value is: %d\n", ft_str_is_uppercase(test));
}*/
