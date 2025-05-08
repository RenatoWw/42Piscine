/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:59:35 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/19 22:32:46 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	draw(int c, int l, int x, int y);
void	ft_putchar(char letter);

void	draw(int c, int l, int x, int y)
{
	if (c == 0 && l == 0)
		ft_putchar('/');
	else if (c == x - 1 && l == y - 1 && l != 0 && c != 0)
		ft_putchar('/');
	else if (c == x - 1 && l == 0)
		ft_putchar('\\');
	else if (l == y - 1 && c == 0)
		ft_putchar('\\');
	else if (c == 0 || c == x - 1)
		ft_putchar('*');
	else if (l == 0 || l == y - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
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
