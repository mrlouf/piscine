/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:21:30 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/25 11:34:33 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3)
		return (0);
	printf("Diff de s1 et s2 = %d\n", ft_strcmp(s1, s2));
	printf("Diff avec strcmp = %d\n", strcmp(s1, s2));
	return (0);
}
