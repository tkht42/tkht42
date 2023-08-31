/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:24:56 by taimai            #+#    #+#             */
/*   Updated: 2023/08/22 09:44:42 by taimai           ###   ########.fr       */
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
	(void)argc;
	charput(argv[0]);
}
