/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:40:18 by taimai            #+#    #+#             */
/*   Updated: 2023/08/22 10:31:53 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	charput(char *str)
{
	while (*str)
		write(1, str++, 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 0)
	{
		charput(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
