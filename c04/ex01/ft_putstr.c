/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:57:47 by taimai            #+#    #+#             */
/*   Updated: 2023/08/21 12:16:12 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int	i;
// 	i = 0;
// 	while (i < argc)
// 	{
// 		ft_putstr(argv[i]);
// 		ft_putstr("abc");
// 		ft_putstr("\n");
// 		i++;
// 	}
// 	return (0);
// }