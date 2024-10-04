/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:39:38 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/16 10:24:48 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "fds";
	s2 = "fdsfds";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}*/
