/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:04:36 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/22 20:10:37 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (*sep++)
		len++;
	len = len * (size - 1);
	while (i < size)
	{
		str = strs[i];
		while (*str++)
			len++;
		i++;
	}
	return (len + 1);
}

char	ft_strscpy(int size, char *dst, char **src, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		s = src[i];
		while (*s)
			dst[j++] = *s++;
		if (*s == '\0' && i < size - 1)
		{
			while (sep[k])
				dst[j++] = sep[k++];
		}
		i++;
		k = 0;
	}
	return (*dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		length;

	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	length = ft_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * length);
	if (!res)
		return (NULL);
	res[length - 1] = '\0';
	*res = ft_strscpy(size, res, strs, sep);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	int		size;
	char	*strs[] = {"Voici", "un", "test", "encore", "une", "fois"};
	char	*sep;
	char	*res;

	size = 0;
	sep = "123";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
