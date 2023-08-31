/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_skycraper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:03:48 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/20 11:03:51 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define PUZZLE_SIZE 4

void	print_solution(char **board);
int		verify_top_view(char **board, int column);
int		verify_left_view(char **board, int row);
int		in_row(char **board, int row, int column, int digit);
int		in_column(char **board, int row, int column, int digit);
void	solve_puzzle(char **board, int row, int column);

void	solve_puzzle_recursive(char **board, int row, int column)
{
	if (column == PUZZLE_SIZE)
	{
		if (verify_left_view(board, row))
		{
			solve_puzzle(board, row + 1, 1);
			if (row == PUZZLE_SIZE)
			{
				if (verify_top_view(board, column))
				{
					board[0][0] = '1';
					print_solution(board);
				}
			}
		}
	}
	else
		solve_puzzle(board, row, column + 1);
}

void	solve_puzzle(char **board, int row, int column)
{
	int	nbr;

	nbr = 1;
	while (nbr <= PUZZLE_SIZE)
	{
		if (in_row(board, row, column, nbr))
		{
			if (in_column(board, row, column, nbr))
			{
				board[row][column] = nbr + '0';
				solve_puzzle_recursive(board, row, column);
			}
		}
		nbr++;
	}
}
