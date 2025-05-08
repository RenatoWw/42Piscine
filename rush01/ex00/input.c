/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:25:51 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/26 19:25:52 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*validateInput(int argc, char *argv[], int *clues);

int	*validateInput(int argc, char *argv[], int *clues)
{
	int	i;
	int	j;
	int	space;

	space = 0;
	i = 0;
	j = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			clues[j] = argv[1][i] - '0';
			j++;
		}
		else if (argv[1][i] != ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		else
			space++;
		i++;
	}
	if (j != 16 || space != 15)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (clues);
}
