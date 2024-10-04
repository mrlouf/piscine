/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:44:28 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 18:15:08 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
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
	test = "abcdefghijklmnopqrstuvwxyz";
	printf("Return value is: %d\n", ft_str_is_lowercase(test));
}*/
