/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/14 00:12:46 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec_print_combn(char *nums, int depth, int start, int n)
{
	int	i;

	if (depth == n)
	{
		write(1, nums, n);
		if (nums[0] != '0' - n + 10)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i < 10)
	{
		nums[depth] = '0' + i;
		rec_print_combn(nums, depth + 1, i + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	nums[10];

	if (!(0 <= n && n <= 9))
		return ;
	rec_print_combn(nums, 0, 0, n);
}
