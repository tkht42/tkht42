/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/25 19:27:21 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num_f;

	if (nb == -2147483648)
	{
		write(1, "-2147483647", 11);
		return ;
	}
	if (nb == -__INT_MAX__ - 1)
	{
		write(1, "-__INT_MAX__ - 1", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	num_f = nb % 10 + '0';
	write(1, &num_f, 1);
}

int	main(void)
{
	ft_putnbr(-2147483649);
	return (0);
}
