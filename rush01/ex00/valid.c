/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 01:13:57 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/27 06:01:59 by mgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_column(int **board)
{
	int	i;
	int	j;
	int	k;
	int	m;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = j + 1;
			while (k < 4)
			{
				if (board[i][j] == board[i][k])
				{
					// printf("board[%d][%d] = board[%d][%d]\n", i, j, i, k);
					return (1);
				}
				k++;
			}
			m = i + 1;
			while (m < 4)
			{
				if (board[i][j] == board[m][j])
				{
					// printf("board[%d][%d] = board[%d][%d]\n", i, j, m, j);
					return (1);
				}
				m++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
//crescente e count crescente

// void	check_border()
