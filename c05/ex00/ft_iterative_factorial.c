/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:34:10 by taimai            #+#    #+#             */
/*   Updated: 2023/08/21 22:56:54 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
		n *= nb--;
	return (n);
}

// #include <stdio.h>
// int	main()
// {
// 	for (int nb = -3; nb < 13; nb++)
// 	{
// 		printf("%2d: %10d\n", nb, ft_iterative_factorial(nb));
// 	}
// 	return (0);
// }