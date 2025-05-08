/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:39:14 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/26 19:39:15 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_matrix(int **board, int line, int column);

void	print_matrix(int **board, int line, int column)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 0;
	while (i < line)
	{
		j = 0;
		while (j < column)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
