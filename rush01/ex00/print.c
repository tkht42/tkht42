/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuksaito <yuksaito@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:17:51 by yuksaito          #+#    #+#             */
/*   Updated: 2023/08/19 13:23:13 by yuksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define PUZZLE_SIZE 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(char **board)
{
	int	i;
	int	j;

	i = 1;
	while (i <= PUZZLE_SIZE)
	{
		j = 1;
		while (j <= PUZZLE_SIZE)
		{
			ft_putchar(board[i][j]);
			if (j < PUZZLE_SIZE)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
