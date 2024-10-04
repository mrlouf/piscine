/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:00:07 by malde-ch          #+#    #+#             */
/*   Updated: 2024/07/07 16:40:01 by malde-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	logic(int ct_x, int ct_y, int x, int y )
{
	int	up_left;
	int	down_left;
	int	up_right;
	int	down_right;

	up_left = ct_x == x && ct_y == y;
	down_left = ct_x == x && ct_y == 1;
	up_right = ct_x == 1 && ct_y == y;
	down_right = ct_x == 1 && ct_y == 1;
	if (up_left || down_left || up_right || down_right)
	{
		ft_putchar('o');
	}
	else if (ct_x == 1 || ct_x == x)
	{
		ft_putchar('|');
	}
	else if (ct_y == 1 || ct_y == y)
	{
		ft_putchar('-');
	}
	else
		ft_putchar(' ');
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
