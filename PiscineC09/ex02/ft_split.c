/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:21:15 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/25 17:40:53 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_strcmp(str[i], charset))
		i++;
	return (i);
}

char	*ft_strdup(char *src, char *charset)
{
	int		len;
	int		i;
	char	*duplicate;

	len = ft_strlen(src, charset);
	duplicate = (char *)malloc(len + 1);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (i < len)
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}

int	count_string(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_strcmp(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_strcmp(*str, charset))
			str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	int		j;
	char	**strings;

	count = count_string(str, charset);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	j = 0;
	while (*str)
	{
		while (*str && ft_strcmp(*str, charset))
			str++;
		if (*str)
		{
			strings[j] = ft_strdup(str, charset);
			j++;
		}
		while (*str && !ft_strcmp(*str, charset))
			str++;
	}
	strings[j] = NULL;
	return (strings);
}

int	main(void)
{
	char	*str = "tiPox2G2xz7QRbrOfApqzOLwmbhxCdxl vG9PaNx223q";
	char	*charset = "bDIYkGN";
	char	**split;
	int	i = 0;

	split = ft_split(str, charset);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
