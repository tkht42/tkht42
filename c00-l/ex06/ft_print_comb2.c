/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/13 23:26:30 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y)
{
	char	c;

	c = '0' +(x / 10);
	write (1, &c, 1);
	c = '0' +(x % 10);
	write (1, &c, 1);
	write (1, " ", 1);
	c = '0' + (y / 10);
	write (1, &c, 1);
	c = '0' + (y % 10);
	write (1, &c, 1);
	if (x != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x, y);
			y++;
		}
		x++;
	}
}
