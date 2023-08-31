/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:29:12 by taimai            #+#    #+#             */
/*   Updated: 2023/08/29 18:47:00 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int *vec)
{
	char	c;

	while (*vec >= 0 && *vec <= 9)
	{
		c = *vec + '0';
		write(1, &c, 1);
		vec++;
	}
}

void	changeboard(int board[10][10], int y, int x, int d)
{
	int	k;

	k = 0;
	while (k < 10)
	{
		board[y][k] += d;
		board[k][x] += d;
		if (y + k < 10 && x + k < 10)
			board[y + k][x + k] += d;
		if (y - k >= 0 && x + k < 10)
			board[y - k][x + k] += d;
		if (y + k < 10 && x - k >= 0)
			board[y + k][x - k] += d;
		if (y - k >= 0 && x - k >= 0)
			board[y - k][x - k] += d;
			k++;
	}
}

void	find_queen(int queen[10], int board[10][10], int y, int *cnt)
{
	int	x;

	x = 0;
	if (y == 10)
	{
		*cnt += 1;
		printer(queen);
		write(1, "\n", 1);
		return ;
	}
	while (x < 10)
	{
		if (board[y][x] == 0)
		{
			queen[y] = x;
			changeboard(board, y, x, 1);
			find_queen(queen, board, y + 1, cnt);
			changeboard(board, y, x, -1);
		}
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queen[10];
	int	board[10][10];
	int	cnt;
	int	itr1;
	int	itr2;

	itr1 = 0;
	while (itr1 < 10)
	{
		itr2 = 0;
		while (itr2 < 10)
		{
			board[itr1][itr2] = 0;
			itr2++;
		}
		queen[itr1] = 0;
		itr1++;
	}
	cnt = 0;
	find_queen(queen, board, 0, &cnt);
	return (cnt);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_ten_queens_puzzle());
// 	return (0);
// }