/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:57:47 by taimai            #+#    #+#             */
/*   Updated: 2023/08/21 12:16:41 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = 10 * nbr + *str - '0';
		str++;
	}
	return (sign * nbr);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	argc = 1;
// 	int	y;
// 	y = ft_atoi(argv[1]);
// 	printf ("\n%d", y);
// 	return (0);
// }