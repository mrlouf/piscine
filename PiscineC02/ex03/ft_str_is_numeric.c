/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:29:51 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 18:12:07 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
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
	test = ":";
	printf("Return value is: %d\n", ft_str_is_numeric(test));
}*/
