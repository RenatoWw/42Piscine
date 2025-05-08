/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-cas <jode-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:59:42 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/20 16:16:29 by jode-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	draw(int c, int l, int x, int y);
void	ft_putchar(char letter);

void	draw(int c, int l, int x, int y)
{
	if ((c == 0 && l == 0) || (c == x - 1 && l == y - 1 && l != 0 && c != 0))
		ft_putchar('A');
	else if ((c == x - 1 && l == 0) || (l == y - 1 && c == 0))
		ft_putchar('C');
	else if (c == 0 || c == x - 1)
		ft_putchar('B');
	else if (l == 0 || l == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	else
	{
		l = 0;
		while (l < y)
		{
			c = 0;
			while (c < x)
			{
				draw(c, l, x, y);
				c++;
			}
			write(1, "\n", 1);
			l++;
		}
	}
}
