/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:33 by taimai            #+#    #+#             */
/*   Updated: 2023/08/13 23:17:06 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '9')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, num, 3);
				if (num[0] != '7')
				{
					write(1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
