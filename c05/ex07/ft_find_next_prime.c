/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:15:25 by taimai            #+#    #+#             */
/*   Updated: 2023/08/22 11:12:03 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb / n)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main()
// {
// 	for (int i = -4; i <= 21; i++)
// 	{
// 		printf("%2d: %10d\n", i, ft_find_next_prime(i));
// 	}
// 	return (0);
// }