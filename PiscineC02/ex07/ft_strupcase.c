/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:07:01 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 18:20:15 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*res_1;
	printf("TEST: %s \n", str_1);
	res_1 = str_1;
	res_1 = ft_strupcase(res_1);
	printf("TEST: %s \n", res_1);
	return (0);
}*/
