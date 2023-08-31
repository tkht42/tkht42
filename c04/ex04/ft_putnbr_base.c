/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:57:47 by taimai            #+#    #+#             */
/*   Updated: 2023/08/28 09:16:08 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	long	n;

	n = nbr;
	b = check_base(base);
	if (b == 0)
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n / b > 0)
	{
		ft_putnbr_base(n / b, base);
		ft_putchar(base[n % b]);
	}
	if (n / b == 0)
	{
		ft_putchar(base[n % b]);
	}
}

// #include <limits.h>
// #include <stdio.h>
// int	main()
// {
// 	ft_putnbr_base(32, "az");
// 	return (0);
// }