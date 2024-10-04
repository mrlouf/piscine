/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:32:06 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 17:58:43 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "Helloo";
	char	dest[] = "Wooooooorld";
	unsigned int	size = 10;

	printf("%s\n", dest);
	ft_strncpy(dest, src, size);
	printf("%s", dest);
}
