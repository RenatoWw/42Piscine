/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:29:27 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/04/26 19:21:28 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*validateInput(int argc, char *argv[], int *clues);
void	print_matrix(int **board, int line, int column);
void	check_col(int row, int col, int **board);
int	check_row_column(int **board);
int	check_border(void);

int	main(int argc, char *argv[])
{
	int	**board;
	int	i, j;
	int	column, line;
	int	clues[16];
	int	top[4], bottom[4], left[4], right[4];
	
	/* aloca as linhas/colunas */
	board = malloc(4 * 8);
	i = 0;
	while (i < 4)
	{
		/* aloca o espaço para cada inteiro dentro das linhas */
		board[i] = malloc(4 * 4);
		i++;
	}
	if (validateInput(argc, argv, clues) == 0)
		return (0);

	i = 0;
	while (i < 4)
	{
		top[i] = clues[i];
		bottom[i] = clues[i + 4];
		left[i] = clues[i + 8];
		right[i] = clues[i + 12];
		i++;
	}

	i = 0;
	j = 0;
	column = 4;
	line = 4;
	
	while (i < line)
	{
		j = 0;
		while (j < column)
		{
			board[i][j] = 1;	
			j++;
		}
		i++;
	}

	check_border();

	board[0][1] = 2;
	board[0][2] = 3;
	board[0][3] = 4;

	board[1][0] = 2;
	board[1][1] = 3;
	board[1][2] = 4;

	board[2][0] = 3;
	board[2][1] = 4;
	board[2][3] = 2;
	
	board[3][0] = 4;
	board[3][2] = 2;
	board[3][3] = 3;


	print_matrix(board, line, column);
	// verificação de coluna - linha
	if (check_row_column(board) != 0)
		printf("Error\n");		

	free(board);
	return (0);
}

// int    backtrack()
// {
// 	if(is_solved())
// 		return (0);

// 	while(board)
// 	{    
// 		if((check_row_column(board) && check_border()) != 0)
// 			continue;

// 		if(backtrack())
// 			return 0;
// 		else
// 			return 1;
// 	}
// }

int	check_border(void)
{
	int line;
	int count_line;
	int j;
	int maior;
	int board[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}};

	maior = board[1][0];
	count_line = 1;
	j = 0;

	while(j <= 3)
	{
		if(board[1][j] > maior)
		{
			maior = board[1][j];
			count_line++;
		}	
		j++;
	}
	return 0;
}
