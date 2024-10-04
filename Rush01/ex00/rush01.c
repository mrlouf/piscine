/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:18:07 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/14 17:43:55 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_create_board(char *str);
void	ft_swap(char *a, char *b);
void	ft_arrange(char *str, int start_i, int n);
void	ft_print_board(char *str);

char	g_board[4][4];
int		g_print_count;

int	main(int count, char **str)
{
	int		i;
	char	str1[4];
	char	values[16];

	str1[4] = {'1', '2', '3', '4'};
	if (count == 2 && str[1][31] == '\0')
	{
		i = 0;
		while (*str[1] > '0' && *str[1] < '5' && *str[1] != '\0')
		{
			if (*(str[1] + 1) == ' ' || *(str[1] + 1) == '\0')
				values[i] = *str[1];
			str[1] = str[1] + 2;
			i++;
		}
		ft_arrange(str1, 0, 4 - 1);
	}
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_arrange(char *str, int start_i, int n)
{
	int	i;

	if (g_print_count >= 1)
		return ;
	if (start_i == n)
	{
		if (g_print_count < 1)
		{
			ft_create_board(str);
			ft_print_board(str);
			g_print_count++;
		}
	}
	else
	{
		i = start_i;
		while (i <= n)
		{
			ft_swap((str + start_i), (str + i));
			ft_arrange(str, start_i + 1, n);
			ft_swap((str + start_i), (str + i));
			i++;
		}
	}
}

void	ft_create_board(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 3)
	{
		y = 0;
		while (y <= 3)
		{
			if (x == 0)
				g_board[x][y] = str[y];
			else if (x >= 1)
			{
				if (y != 3)
					g_board[x][y] = g_board[x - 1][y + 1];
				else
					g_board[x][y] = g_board[x - 1][0];
			}
			y++;
		}
		x++;
	}
}

void	ft_print_board(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 3)
	{
		y = 0;
		while (y <= 3)
		{
			write(1, &g_board[x][y], 1);
			write(1, " ", 1);
			y++;
		}
		x++;
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}
