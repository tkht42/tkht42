/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_view.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:10:11 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/19 16:10:16 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PUZZLE_SIZE 4

int	verify_bottom_view(char **board, int column)
{
	int		i;
	char	visible;
	char	max_height;

	i = PUZZLE_SIZE;
	visible = '1';
	max_height = board[i][column];
	while (i >= 1)
	{
		if (board[i][column] > max_height)
		{
			max_height = board[i][column];
			visible++;
		}
		i--;
	}
	if (board[PUZZLE_SIZE + 1][column] == visible)
		return (1);
	return (0);
}

int	verify_top_view(char **board, int column)
{
	int		i;
	char	visible;
	char	max_height;

	i = 1;
	visible = '1';
	max_height = board[i][column];
	while (i <= PUZZLE_SIZE)
	{
		if (board[i][column] > max_height)
		{
			max_height = board[i][column];
			visible++;
		}
		i++;
	}
	if (board[0][column] == visible)
		return (verify_bottom_view(board, column));
	return (0);
}

int	verify_right_view(char **board, int row)
{
	int		i;
	char	visible;
	char	max_height;

	i = PUZZLE_SIZE;
	visible = '1';
	max_height = board[row][i];
	while (i >= 1)
	{
		if (board[row][i] > max_height)
		{
			max_height = board[row][i];
			visible++;
		}
		i--;
	}
	if (board[row][PUZZLE_SIZE + 1] == visible)
		return (1);
	return (0);
}

int	verify_left_view(char **board, int row)
{
	int		i;
	char	visible;
	char	max_height;

	i = 1;
	visible = '1';
	max_height = board[row][i];
	while (i <= PUZZLE_SIZE)
	{
		if (board[row][i] > max_height)
		{
			max_height = board[row][i];
			visible++;
		}
		i++;
	}
	if (board[row][0] == visible)
		return (verify_right_view(board, row));
	return (0);
}
