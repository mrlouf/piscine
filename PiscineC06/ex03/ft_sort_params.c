/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:11:05 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/17 14:27:36 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int size, char **arg)
{
	char	*swap;
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && ft_strcmp(arg[j - 1], arg[j]) > 0)
		{
			swap = arg[j - 1];
			arg[j - 1] = arg[j];
			arg[j] = swap;
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_swap(argc - 1, argv + 1);
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
