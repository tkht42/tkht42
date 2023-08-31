/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skycraper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:02:38 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/20 11:02:47 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define PUZZLE_SIZE 4

char	**create_board(void);
char	**create_conditions_matrix(char *str);
void	set_conditions_matrix(char **board, char **conditions_matrix);
void	solve_puzzle(char **board, int row, int column);
void	print_error(void);

void	free_matrix(char **board, char **conditions_matrix)
{
	int	i;

	i = 0;
	while (i < PUZZLE_SIZE + 2)
	{
		free(board[i]);
		i++;
	}
	free(board);
	i = 0;
	while (i < PUZZLE_SIZE)
	{
		free(conditions_matrix[i]);
		i++;
	}
	free(conditions_matrix);
}

void	solve_skyscraper(char *conditions)
{
	char	**board;
	char	**conditions_matrix;

	board = create_board();
	conditions_matrix = create_conditions_matrix(conditions);
	set_conditions_matrix(board, conditions_matrix);
	solve_puzzle(board, 1, 1);
	if (board[0][0] == '0')
		print_error();
	free_matrix(board, conditions_matrix);
}
