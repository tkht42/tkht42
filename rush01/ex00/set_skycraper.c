/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_skycraper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:01:59 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/20 11:03:27 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define PUZZLE_SIZE 4

char	**new_matrix(int size)
{
	int		i;
	char	**matrix;

	i = 0;
	matrix = (char **)malloc(size * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	while (i < size)
	{
		matrix[i] = (char *)malloc(size * sizeof(char));
		if (matrix[i] == NULL)
			return (NULL);
		i++;
	}
	return (matrix);
}

char	**create_board(void)
{
	char	**board;

	board = new_matrix(PUZZLE_SIZE + 2);
	board[0][0] = '0';
	return (board);
}

char	**create_conditions_matrix(char *conditions)
{
	int		i;
	int		j;
	int		k;
	char	**conditions_matrix;

	i = 0;
	j = 0;
	conditions_matrix = new_matrix(PUZZLE_SIZE);
	while (i < PUZZLE_SIZE)
	{
		k = 0;
		while (k < PUZZLE_SIZE)
		{
			conditions_matrix[k][i] = conditions[j + k * 2 * PUZZLE_SIZE];
			k++;
		}
		i++;
		j += 2;
	}
	return (conditions_matrix);
}

void	set_conditions_matrix(char **board, char **conditions_matrix)
{
	int	i;

	i = 1;
	while (i <= PUZZLE_SIZE)
	{
		board[0][i] = conditions_matrix[0][i - 1];
		board[PUZZLE_SIZE + 1][i] = conditions_matrix[1][i - 1];
		board[i][0] = conditions_matrix[2][i - 1];
		board[i][PUZZLE_SIZE + 1] = conditions_matrix[3][i - 1];
		i++;
	}
}
