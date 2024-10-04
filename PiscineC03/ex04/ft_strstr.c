/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:03:26 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/22 17:00:12 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "finding nemo!";
	char	to_find[] = "nemo";
	printf("Location with copy: %s\n", ft_strstr(str, to_find));
    printf("Location with real: %s", strstr(str, to_find));
}
