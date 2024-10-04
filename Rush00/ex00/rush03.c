/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:07:31 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/07 15:59:18 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	logic(int ct_x, int ct_y, int x, int y )
{
	if ((ct_x == x && ct_y == y) || (ct_x == x && ct_y == 1))
	{
		ft_putchar('A');
	}
	else if ((ct_x == 1 && ct_y == y) || (ct_x == 1 && ct_y == 1))
	{
		ft_putchar('C');
	}
	else if (ct_x == 1 || ct_x == x || ct_y == 1 || ct_y == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

int	rush(int x, int y)
{
	int	ct_x;
	int	ct_y;

	ct_x = x;
	ct_y = y;
	if (y > 0 && x > 0)
	{
		while (ct_y > 0)
		{
			while (ct_x > 0)
			{
				logic(ct_x, ct_y, x, y);
				ct_x--;
			}
			ct_x = x;
			ct_y--;
			ft_putchar('\n');
		}
	}
	return (0);
}
