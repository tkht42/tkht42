/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_duplication.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:12:41 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/19 16:13:11 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PUZZLE_SIZE 4

int	in_row(char	**board, int row, int column, int nbr)
{
	int	i;

	i = 1;
	while (i < column)
	{
		if (board[row][i] == nbr + '0')
			return (0);
		i++;
	}
	return (1);
}

int	in_column(char **board, int row, int column, int nbr)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (board[i][column] == nbr + '0')
			return (0);
		i++;
	}
	return (1);
}
