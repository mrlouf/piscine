/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:35:29 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/25 11:55:42 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n;

	if (argc != 4)
		return (0);
	s1 = argv[1];
	s2 = argv[2];
	n = &argv[3][0] - 48;
	printf("Result of s1 - s2: %d\n", ft_strncmp(s1, s2, n));
}
