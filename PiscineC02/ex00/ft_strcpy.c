/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:49:39 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/15 10:09:39 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    dest[] = "Hel";
    char    src[] = "World";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
}*/
