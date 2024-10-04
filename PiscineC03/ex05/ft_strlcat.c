/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:08:54 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/15 17:12:24 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_src;
	unsigned int	s_dest;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	s_src = ft_strlen(src);
	s_dest = ft_strlen(dest);
	while (dest[i])
		i++;
	while ((src[j] || dest[i]) && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (s_src + s_dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    *src = "World";
    char    dest[50] = "Hello ";
   // char    temp[10] = "Hello ";
	int		size = 1;
    printf("ft_strlcat: %u\n", ft_strlcat(dest, src, size));
   // printf("real strlcat: %d", strlcat(temp, src, size));
}*/
