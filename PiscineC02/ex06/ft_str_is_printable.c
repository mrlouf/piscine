/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:57:19 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/13 13:59:38 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
	test = "56ad\n";
	printf("Return value is: %d\n", ft_str_is_printable(test));
}*/
