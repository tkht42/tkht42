/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/14 06:20:44 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl != 0)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
		write(1, &c[--i], 1);
}
