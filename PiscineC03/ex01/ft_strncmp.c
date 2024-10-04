/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:48:25 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/15 16:29:22 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    *s1;
    char    *s2;
	unsigned int	size = 1;

    s1 = "a";
    s2 = "z";
    printf("%d\n", ft_strncmp(s1, s2, size));
    printf("%d", strncmp(s1, s2, size));
}*/
