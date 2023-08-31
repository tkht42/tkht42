/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:49:27 by taimai            #+#    #+#             */
/*   Updated: 2023/08/21 18:03:58 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (i < power)
		{
			n *= nb;
			i++;
		}
	}
	return (n);
}

// #include <stdio.h>

// int	main()
// {
// 	for (int i = -3; i < 13; i++)
// 	{
// 		printf("%2d: %10d\n", i, ft_iterative_power(5, i));
// 	}
// 	return (0);
// }