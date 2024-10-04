/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:31:44 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/21 19:17:45 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		l;
	int		i;

	i = 0;
	l = ft_len(src);
	dup = (char *)malloc(sizeof(char) * l + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*s1;

	src = "";
	
	s1 = ft_strdup(src);
	printf("Result of ft_strdup: %s\n", s1);
	free(s1);
	return (0);
}*/
