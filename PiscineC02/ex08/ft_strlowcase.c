/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:05:08 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 18:26:53 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char    str_1[] = "azAZ 104 ;'];]";
    char    *res_1;
    printf("TEST: %s \n", str_1);
    res_1 = str_1;
    printf("TEST: %s \n", ft_strlowcase(res_1));
    return (0);
}*/
