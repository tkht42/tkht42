/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taimai <taimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:04:36 by taimai            #+#    #+#             */
/*   Updated: 2023/08/19 15:47:10 by taimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexachars;

	hexachars = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			putchar(*str);
		}
		else
		{
			putchar('\\');
			putchar(hexachars[(unsigned int)*str / 16]);
			putchar(hexachars[(unsigned int)*str % 16]);
		}
		str++;
	}
}

// int	main()
// {
// 	char	*p;
// 	p = "esg\nk\t21kh";
// 	ft_putstr_non_printable(p);
// 	return (0);
// }